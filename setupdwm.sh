echo "Make sure to run with Sudo/Doas!"
cd dwm/
make clean install
cd ../st
make clean install
mkdir /usr/local/share/applications/
mv st.desktop /usr/local/share/applications/
cd ../slstatus
make clean install
cd ..
cp .dwminitrc ~/
