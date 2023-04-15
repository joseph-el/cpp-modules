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