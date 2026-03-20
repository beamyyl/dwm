# This is my DWM config, but very patched. This brings back i3 / hyprland behaviour, where you can move windows with Super LMB and resize with Super Shift RMB without putting them in floating.
Arch: 
sudo pacman -S base-devel libx11 libxft libxinerama git \
               alacritty pcmanfm rofi maim xclip \
               brightnessctl wireplumber \
               polybar ttf-iosevka-nerd
Fedora:
sudo dnf install gcc make libX11-devel libXft-devel libXinerama-devel git \
                 alacritty pcmanfm rofi maim xclip \
                 brightnessctl wireplumber \
                 polybar iosevka-comfy-fonts
Debian: 
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev git \
                 alacritty pcmanfm rofi maim xclip \
                 brightnessctl wireplumber \
                 polybar fonts-iosevka
Gentoo:
sudo emerge -aq x11-libs/libX11 x11-libs/libXft x11-libs/libXinerama dev-vcs/git \
               x11-terms/alacritty x11-misc/pcmanfm x11-misc/rofi x11-misc/maim x11-misc/xclip \
               sys-power/brightnessctl media-video/wireplumber \
               x11-misc/polybar media-fonts/iosevka

Then, just run 'sudo make clean install' in the dwm/ and slstatus/ folder.
MAKE SURE TO ADD "slstatus &" IN YOUR XINITRC!!!
