// Credits https://stackoverflow.com/questions/3723846/convert-from-hex-color-to-rgb-struct-in-c
//
//
// Rewrite the code in C trying to understand

typedef struct _rgba
{
 float r, g, b;
} rgba, * p_rgba;


rgba hex_to_rgb(int hex_code)
{
  rgba rgb_struct;

  rgb_struct.r = ((hex_code >> 16) & 0xFF) / 255.0f;
  rgb_struct.g = ((hex_code >> 8) & 0xFF ) / 255.0f;
  rgb_struct.b = ((hex_code) & 0xFF) / 255.0f;


  // Lets take an example some yellow color: #c5eb1e = 110001011110101100011110
  // To get the red color it'll move 16 bits to right then u'll get 11000101
  // then you use the mask 0xFF to consider just the first 8 bits and so-on.
  //

  return rgba_struct;
}
