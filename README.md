### This dwm config brings back i3 / hyprland behaviour, where you can move windows with Super LMB and resize with Super Shift RMB without putting them in floating.
# Installation guide + dependencies:

**Arch**
```bash
sudo pacman -S base-devel libx11 libxft libxinerama git alacritty pcmanfm rofi maim xclip brightnessctl wireplumber ttf-iosevka-nerd
```

**Fedora**
```bash
sudo dnf install gcc make libX11-devel libXft-devel libXinerama-devel git alacritty pcmanfm rofi maim xclip brightnessctl wireplumber
```

**Debian/Ubuntu**
```bash
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev git alacritty pcmanfm rofi maim xclip brightnessctl wireplumber
```

**Gentoo**
```bash
sudo emerge -av x11-libs/libX11 x11-libs/libXft x11-libs/libXinerama dev-vcs/git x11-terms/alacritty x11-misc/pcmanfm x11-misc/rofi x11-misc/maim x11-misc/xclip sys-power/brightnessctl media-video/wireplumber
```

## Install
```bash
cd dwm && sudo make clean install
cd ../slstatus && sudo make clean install
```

Add to your `~/.xinitrc`:
```bash
slstatus &
exec dwm
```
