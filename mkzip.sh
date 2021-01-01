#!/bin/bash

problem_number=1
for problem in *
do
    if [ -d $problem ]
    then
        echo $problem
        for file in $problem/*
        do
            if [[ "$file" == *-hint.txt ]] || [[ "$file" == *final-answer.txt ]]
            then
                echo $file
                ans=$(sed "${problem_number}q;d" ans.txt)
                echo $ans
                zip -P $ans ${file%txt*}zip $file
                zip problems.zip ${file%txt*}zip
            fi
            if [[ "$file" == "$problem"/"$problem"* ]] && [[ "$file" != *-hint.txt ]]
            then
                zip problems.zip $file
            fi
        done
        problem_number=$((problem_number+1))
    fi
done
zip problem.zip README.txt
