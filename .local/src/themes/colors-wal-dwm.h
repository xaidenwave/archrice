static const char norm_fg[] = "#99a2d6";
static const char norm_bg[] = "#060306";
static const char norm_border[] = "#6b7195";

static const char sel_fg[] = "#99a2d6";
static const char sel_bg[] = "#272A6D";
static const char sel_border[] = "#99a2d6";

static const char urg_fg[] = "#99a2d6";
static const char urg_bg[] = "#242359";
static const char urg_border[] = "#242359";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
