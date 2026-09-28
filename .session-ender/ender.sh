#!/bin/bash

# update the solved problems
pr -m <(tree -L 2 exercises/ --compress=3) <(tree -L 2 examples/ --compress=3) \
 	-f -h "CONTENTS" > README.txt;
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
