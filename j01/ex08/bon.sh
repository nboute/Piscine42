echo `ldapsearch -QLLL "(sn=*bon*)" sn | grep sn: | wc -l`
