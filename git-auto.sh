#!/bin/bash
read -p "Enter the name of directory or file you want to git add: " name
git add $name
read -p "Enter your commit message: " message
git commit -m "$message"
echo "\tDISPLAYING your GIT status!"
git status
echo "\tPUSHING YOUR FILES INTO YOUR GITHUB REPOSITORY"
git push
