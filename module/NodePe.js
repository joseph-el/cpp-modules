const {readdirSync, readFileSync} = require("fs")

for (let name of readdirSync(".")) {
  if (!/^\d\d.*\.$/.test(name)) continue

  let file = readFileSync(name, "utf8")
  let title = file.match(/(?:\n|^)# (.*?)\n/)[1], titleWritten = false

  let curSubsection
  let re = /\n### (.*?)\n|\{\{\n([^]+?)\nhint\}\}/g
  while (m = re.exec(file)) {
    if (m[1]) {
      curSubsection = m[1]
    } else {
      if (!titleWritten) {
        process.stdout.write(`## ${title}\n\n`)
        titleWritten = true
      }
      process.stdout.write(`### ${curSubsection}\n\n${m[2].trim()}\n\n`)
    }
  }
}

const PJSON = require("./pseudo_json")
let fs = require("fs")
let acorn = require("acorn")
let varify = require("./varify")

let file = process.argv[2]
let chapNum = Number(file.match(/^\d*/)[0])
let doRun = ![10, 11, 20, 21].includes(chapNum)
let input = fs.readFileSync(file, "utf8")


let meta = /\{\{meta (.*?)\}\}\n/.exec(input)
let include = /\bload_files: (\[[^\]]+\])/.exec(meta ? meta[1] : "")
if (include) JSON.parse(include[1]).forEach(function(fileName) {
  if (fileName == "code/chapter/" + file.replace(/md/, "js")) return
  let text = fs.readFileSync("html/" + fileName)
  if (!/\/\/ test: no/.test(text))
    baseCode += text
})

function wrapTestOutput(snippet, config) {
  let output = "", m, re = /\/\/ → (.*\n)((?:\/\/   .*\n)*)/g
  while (m = re.exec(snippet)) {
    output += m[1]
    if (m[2]) output += m[2].replace(/\/\/   /g, "")
  }
  return "console.clear();\n" + snippet + "console.verify(" + JSON.stringify(output) + ", " + JSON.stringify(config) + ");\n"
}

function wrapForError(snippet, message) {
  return "try { (function() {\n" + snippet + "})();\n" +
    "cX" +
    JSON.stringify(message) + ") }\n"
}

function pos(index) {
  return "line " + (input.slice(0, index).split("\n").length + 1)
}