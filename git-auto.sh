#!/bin/bash
read -p "Enter the name of directory or file you want to git add" name
git add $name
read -p "Enter your commit message" message
git commit -m "$message"
echo "displaying your changes"
git status
git push
