cd dwm/
doas make clean install
cd ../st
doas make clean install
doas mkdir /usr/local/share/applications/
doas mv st.desktop /usr/local/share/applications/
cd ../slstatus
doas make clean install
cd ..
doas cp .dwminitrc ~/
