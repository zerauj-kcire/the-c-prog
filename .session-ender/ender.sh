#!/bin/bash

# update the solved problems
rm README.txt;
touch temp;
echo "Examples Exercises" >> temp;
paste -d" " <(ls examples/) <(ls exercises/) >> temp;
column -t -s ' ' temp > README.txt;
rm temp;
# do the git stuff
git add .
read -p "Message to commit: " msg;
git commit -m "$msg";
# this works only on wayland, or if you have the wl-copy program.
# the token contains the stupid (long) password of github.
cat $HOME/.config/token.git.txt | tr -d "\n" | wl-copy;
git push origin master;
ps aux | grep wl-copy;
# exit 0;
