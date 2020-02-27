cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d '*' -f 1 | rev | sort -r | sed -n -e "$FT_LINE1,$FT_LINE2"p | tr '\n' '.' | sed "s/.:/, /g" | cut -d ':' -f 2 | tr -d '\n'
