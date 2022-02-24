const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#060306", /* black   */
  [1] = "#242359", /* red     */
  [2] = "#272A6D", /* green   */
  [3] = "#4F4E4A", /* yellow  */
  [4] = "#6B6963", /* blue    */
  [5] = "#C83313", /* magenta */
  [6] = "#2D368B", /* cyan    */
  [7] = "#99a2d6", /* white   */

  /* 8 bright colors */
  [8]  = "#6b7195",  /* black   */
  [9]  = "#242359",  /* red     */
  [10] = "#272A6D", /* green   */
  [11] = "#4F4E4A", /* yellow  */
  [12] = "#6B6963", /* blue    */
  [13] = "#C83313", /* magenta */
  [14] = "#2D368B", /* cyan    */
  [15] = "#99a2d6", /* white   */

  /* special colors */
  [256] = "#060306", /* background */
  [257] = "#99a2d6", /* foreground */
  [258] = "#99a2d6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
