My suckless dots, what else can I say.
# Installation guide + dependencies:

**Arch**
```bash
sudo pacman -S base-devel libx11 libxft libxinerama
```

**Fedora**
```bash
sudo dnf install gcc make libX11-devel libXft-devel libXinerama-devel
```

**Debian/Ubuntu**
```bash
sudo apt install build-essential libx11-dev libxft-dev libxinerama-dev
```

**Gentoo**
```bash
sudo emerge -av x11-libs/libX11 x11-libs/libXft x11-libs/libXinerama
```

## Install
```bash
cd dwm && chmod +x setupdwm.sh && sudo ./setupdwm.sh
```

Add to your `~/.xinitrc`:
```bash
slstatus &
exec dwm
```
