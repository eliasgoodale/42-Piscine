#!/bin/sh
cat /etc/passwd | sed -e 's/:*:.*//' -e '/^#/ d' | sed -n '2,${p;n;}' | sed '/\n/!G;s/\(.\)\(.*\n\)/&\2\1/;//D;s/.//' | sort -r | sed -n "$FT_LINE1 , $FT_LINE2 p" | sed '$!s/$/, /' | tr -d '\n' | sed '$s/$/./'
