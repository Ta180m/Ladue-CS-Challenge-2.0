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
            fi
        done
        problem_number=$((problem_number+1))
    fi
done
