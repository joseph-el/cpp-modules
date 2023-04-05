#!/bin/bash

files=(/Users/joseph/Desktop/cpp-modules/learning_concepts/ENUMS_C++.cpp /Users/joseph/Desktop/cpp-modules/learning_concepts/Visibility_C++.cpp)

text_to_add="#include <stdlib.h>"

gcc /Users/joseph/Desktop/cpp-modules/learning_concepts/clear.c

while true
do

  for file_path in "${files[@]}"
  do
    echo $text_to_add >> $file_path

  done
  git add .
  git commit -m "Learning ..."
  git push origin master
  
  sleep 2
done
