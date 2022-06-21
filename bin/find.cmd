find /usr/include -print -type f -exec grep "#include" {} \; 2>&1 | grep "#include" | tee find.log
