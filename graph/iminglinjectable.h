#ifndef IMINGLINJECTABLE_H
#define IMINGLINJECTABLE_H

#include "mingl.h"
#include "../tools/myexception.h"

/**
 * @brief Makes objects insertable into minGL objects
 * @class IMinGlInjectable iminglinjectable.h
 *
 * Implements a way to draw 2D elements into GLUT contexts (minGL objects)
 * by overriding the virtual _Edit method
 */
 //TODO: Rename to minGLInsertable (<<)
class IminGlInjectable
{
  protected :
    /**
     * @brief Edits an openGl context
     *
     * @param Window The openGl context
     * @return The previously edited openGl context
     */
    virtual minGL & _Edit (minGL & Window) const throw (myexception) = 0;

  public :

    /**
     * @brief Makes instances of an insertable object insertable into openGl contexts
     *
     * Calls the _Edit method to edit the provided context, that's why this operator is set as
     * a class friend.
     *
     * @param Window The context
     * @param Obj The object to insert
     * @return The edited context
     */
    friend minGL & operator << (minGL & Window,
                                       const IminGlInjectable & Obj)
    {
        return Obj._Edit (Window);
    }
}; // IminGlInjectable

#endif // IMINGLINJECTABLE_H
