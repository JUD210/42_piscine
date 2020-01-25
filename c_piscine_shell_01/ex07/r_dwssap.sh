cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | rev | sed 's/.*://' | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed 's/$/,/g' | tr -d '\n' | sed 's/,/, /g' | sed 's/, $/./g' | tr -d '\n'
