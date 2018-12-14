#ifndef RGBCOLOR_H
#define RGBCOLOR_H

#include "freeglut.h" //GLubyte
#include "../tools/IEditable.h"

/**
 * @class RGBcolor
 * @brief Provides RGB formatted color objects
 */
class RGBcolor : public nsUtil::IEditable
{
public:
    /**
     * The red value (0-255)
     */
    GLubyte Red;

    /**
     * The Green value (0-255)
     */
    GLubyte Green;

    /**
     * The blue blue (0-255)
     */
    GLubyte Blue;

    /**
     * @brief The object constructor
     *
     * @param R Red value (default 0)
     * @param G Glue value (default 0)
     * @param B Blue value (default 0)
     */
    RGBcolor (const GLubyte & R = 0, const GLubyte & G = 0, const GLubyte & B = 0) : Red (R), Green (G), Blue (B) {}

    /**
     * @brief operator ==: compare a color to the current object
     *
     * @param col The other color
     * @return Whether the other color is equal to the current object
     */
    bool operator == (const RGBcolor & col) {return col.Red == Red && col.Green == Green && col.Blue == Blue;}
protected :

    /**
     * @brief toString equivalent: inserts the color description into a stream
     *
     * @param os The output stream (default std::cout)
     * @return The provided stream
     */
    virtual std::ostream & _Edit (std::ostream & os = std::cout) const;
};

//https://www.rapidtables.com/web/color/RGB_Color.html
/**
 * Black
 */
const RGBcolor KBlack     {  0,   0,   0};

/**
 * White
 */
const RGBcolor KWhite     {255, 255, 255};

/**
 * Red
 */
const RGBcolor KRed       {255,   0,   0};

/**
 * Lime (strong green, like chartreuse)
 */
const RGBcolor KLime      {0  , 255,   0};

/**
 * Blue
 */
const RGBcolor KBlue      {0  ,   0, 255};

/**
 * Yellow
 */
const RGBcolor KYellow    {255, 255,   0};

/**
 * Cyan
 */
const RGBcolor KCyan      {0  , 255, 255};

/**
 * Mangenta
 */
const RGBcolor KMagenta   {255,   0, 255};

/**
 * Silver (looks like ultra-smooth silver, but less shiny)
 */
const RGBcolor KSilver 	  {192, 192, 192};

/**
 * Gray
 */
const RGBcolor KGray      {128, 128, 128};

/**
 * Maroon
 */
const RGBcolor KMaroon    {128,   0,   0};

/**
 * Olive (some kind of green)
 */
const RGBcolor KOlive     {128, 128,   0};

/**
 * Light green
 */
const RGBcolor KGreen     {0  , 128,   0};

/**
 * Purple
 */
const RGBcolor KPurple    {128,   0, 128};

/**
 * Teal (like the blue sky)
 */
const RGBcolor KTeal      {0  , 128, 128};

/**
 * Some bold blue
 */
const RGBcolor KNavy      {0  ,   0, 128};

#endif // RGBCOLOR_H
