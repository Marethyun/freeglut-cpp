#include <iostream>

#include "graph/rgbcolor.h"
#include "graph/mingl.h"
#include "graph/pos.h"
//#include "figs/basefig.h"
#include "figs/triangle.h"
#include "figs/line.h"
#include "figs/rectangle.h"
#include "figs/circle.h"

#include "figs/figure.h"

using namespace std;

int main()
{
    /*    baseFig F;
    cout << F << endl;
*/
    figure f;
    //  f.Add(shared_ptr<triangle> new (triangle (pos (0, 0), pos (100, 100), pos (300, 200), KRed, KBlack)));

   // f.Add(circle (pos (100, 100), 50, KRed, KYellow));
   // triangle tri (pos (0, 0), pos (100, 100), pos (300, 200), KRed, KBlack);
    // shared_ptr<triangle> trip (new triangle (tri));
   // f.Add(tri);

    //   f.Add (shared_ptr<triangle> (tri);
    //    //cout << tri << endl;
    //    triangle tri2 (tri + pos (10, 10));
    //    //cout << pos (10, 10) + tri + pos (20, 20)   << endl;
    //    cout << tri2 << endl;
    cout << "Hello World!" << endl;

    //  minGL::initGlut();
    minGL Window;
    Window.initGlut();

    Window.initGraphic();
    //    Window << tri;
    //    Window.get_key();

    //    for (unsigned i (0); i < 10; ++i)
    //        for (unsigned j(0); j < 10; ++j)
    //            Window.setPixel(pos (i,j), KRed);
    //    Window << pos (50, 50) + 2 * tri * 0.5 + pos (10, 10);
    //    Window << pos (20, 20) + tri + pos (10, 10);
    //    Window << line (pos(50, 50), pos (150, 150), KRed) * 0.5 + pos (10, 10);
    //    //Window.get_key();
    //    Window << 0.5 * rectangle (pos (10, 10), 50, 100, KRed, KYellow) + pos (10, 10);
    //    Window << circle (pos (100, 100), 50, KRed, KYellow);
    //    Window.updateGraphic();
    //    Window.get_key();
    //    Window.clearScreen();
//    Window << f;
//    Window.updateGraphic();
//    // cout << int (Window.get_key()) << endl;
//    Window.get_key();
//    Window.clearScreen();
//    Window << f + pos (10, 10);
//    Window.updateGraphic();
//    Window.get_key();

//    Window.clearScreen();
//    Window << pos (50, 50) + 0.5*f + pos (10, 10);
//   // f.Add (vector <int> {1});
//    Window.updateGraphic();
//    Window.get_key();

    figure PacMan;
    PacMan.Add(circle (pos (50, 50), 50, KBlack, KYellow));
    PacMan.Add(circle (pos (75, 75), 5, KBlack, KBlack));
    PacMan.Add(triangle(pos (50, 50),
                                        pos (100, 50),
                                        pos (83, 15), KBlack, KBlack));

    f.Add (PacMan);
    Window << f;
    Window.updateGraphic();
    Window.get_key();
    return 0;
}
