#ifndef MINGL_H
#define MINGL_H

#include <string>
#include <vector>
#include <queue>
#include <memory> //shared_ptr

#include "freeglut.h"

#include "libgraphique_fonts.h"
#include "rgbcolor.h"

#include "../tools/myexception.h"
#include "../figs/pos.h"

#include "../tools/pixelexception.h"

/**
 * @class minGL
 * @brief OpenGl context class, represents a displayable and updatable window.
 *
 * This class can be instantiated as is to create a window.
 * You may insert (<<) insertable objects (see minGlInsertable interface) into it to draw them
 */
//pour les fonts et l'affichage des string voir : https://www.opengl.org/resources/libraries/glut/spec3/node76.html
class minGL
{
private:
    /**
     * The window width
     */
    const unsigned windowWidth;

    /**
     * The window height
     */
    const unsigned windowHeight;

    /**
     * The window name
     */
    const std::string windowName;

    /**
     * A reference to the drawing font
     */
    std::shared_ptr <font> windowFont = std::make_shared<font> (FONT_HELVETICA_10);

    /**
     * The font color
     */
    RGBcolor fontColor = KBlack;

    /**
     * The font size
     */
    unsigned fontSize = 10;

    /**
     * The window's background color
     */
    RGBcolor bgColor = KWhite;


    /**
     * The glut window id
     */
     // TODO: Make this settable
    short glutWindowId = 0;

    /**
     * The GLUT screen buffer, as a vector of formatted pixels (GLubyte <=> unsigned char)
     */
    std::vector <GLubyte> screenBuffer;

    /**
     * The keyboard buffer, as a queue of the stroked keys
     */
    std::queue <char> keyboardBuffer;


    /**
     * @brief Reshape handler
     *
     * @param h The viewport height
     * @param w The viewport width
     */
    void callReshape(int h, int w) ;

    /**
     * @brief Window display handler
     */
    void callDisplay();

    /**
     * @brief Keyboard standard handler
     *
     * @param key The stroked key code
     * @param x ?
     * @param y ?
     */
    void callKeyboard(unsigned char key, int x = 0, int y = 0);

    /**
     * @brief Keyboard special handler (for special key codes)
     *
     * @param key The stroked key code
     * @param x ?
     * @param y ?
     */
    void callKeyboardSpecial(int key, int x =0, int y = 0);

public:

    /**
     * @brief The GLUT initializer
     */
    static void initGlut(){
        int tmp=0;
        glutInit(&tmp, NULL);
    }

    /**
     * @brief Initialize the GLUT context
     *
     * Sets the window size, position, and GLUT configuration
     */
    void initGraphic();

    /**
     * @brief Destroys the window
     */
     // TODO: fix typo
    void stopGaphic();

    /**
     * @brief The object constructor
     *
     * @param Width The window width
     * @param Height The window height
     * @param Name The window name
     */
    minGL(const unsigned & Width = 640, const unsigned & Height = 480, const std::string & Name = std::string());

    /**
     * @brief The object destructor
     */
    ~minGL();

    /**
     * @brief Updates the window
     *
     * Redraws the screen buffer
     */
    void updateGraphic ();

    /**
     * @brief Clears the window
     */
    void clearScreen() throw (myexception);

    /**
     * @brief Draws a colored pixel to the openGl context
     * @param pos_ The pixel position
     * @param col The color
     */
    void setPixel(const pos & pos_, const RGBcolor & col) throw (PixelException);

    /**
     * Gets a stroked key
     *
     * @return The key character
     */
    char get_key ();

};

#endif // MINGL_H
