const unsigned int interval = 1000;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048

static const struct arg args[] = {
	{ run_command,   "%s",        "wpctl get-volume @DEFAULT_SINK@ | awk '{if ($NF==\"[MUTED]\") print \"󰝟 muted\"; else { v=$2*100; if (v<30) printf \"󰕿 %d%%\", v; else if (v<70) printf \"󰖀 %d%%\", v; else printf \"󰕾 %d%%\", v}}'" },
	{ run_command,   " | %s",     "cat /sys/class/power_supply/BAT0/capacity | tr -d '\\n' | xargs -I{} sh -c 's=$(cat /sys/class/power_supply/BAT0/status); p={}; if [ \"$s\" = \"Charging\" ]; then printf \"󰂈 %d%%\" $p; elif [ \"$s\" = \"Full\" ]; then printf \"󰁹 %d%%\" $p; elif [ $p -le 10 ]; then printf \"󰂎 %d%%\" $p; elif [ $p -le 25 ]; then printf \"󰁺 %d%%\" $p; elif [ $p -le 50 ]; then printf \"󰁼 %d%%\" $p; elif [ $p -le 75 ]; then printf \"󰁾 %d%%\" $p; else printf \"󰂀 %d%%\" $p; fi'" },
	{ datetime,      " | 󰥔 %s  ", "%H:%M | 󰃭 %Y-%m-%d" },
};
