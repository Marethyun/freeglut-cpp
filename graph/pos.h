#ifndef POS_H
#define POS_H

/**
 * @struct pos
 * @brief Provides position objects (x;y)
 */
struct pos
{
    /**
     * The position coordinates
     */
    unsigned abs, ord;

    /**
     * @brief The object constructor
     *
     * @param abs_ x coordinate
     * @param ord_ y coordinate
     */
    pos (const unsigned & abs_ = 0, const unsigned & ord_ = 0) : abs(abs_), ord (ord_) {}

    /**
     * @brief operator +: adds a position to the current object
     *
     * @param pos_ The other position
     * @return The resulted position
     */
    pos operator + (const pos & pos_) const {
        return pos (abs + pos_.abs, ord + pos_.ord);
    }

    /**
     * @brief operator ==: compares a position to the current object
     *
     * @param pos_ The other position
     * @return Whether the provided position is equal to the current object
     */
    bool operator == (const pos & pos_) const {
        return pos_.abs == abs && pos_.ord == ord;
    }

    /**
     * @brief operator *: multiplies the provided float to the coordinates
     *
     * @param reductionRation The multiplication ratio
     * @return The resulted position
     */
    pos operator * (const float & reductionRation) const {
        return pos (abs*reductionRation, ord*reductionRation);
    }

    /**
     * @brief operator *: multiplies a position to the current position
     *
     * @param pos_ The other position
     * @return The resulted position
     */
    pos operator *(const pos & pos_) const {
        return pos (abs*pos_.abs, ord*pos_.ord);
    }

    /**
     * @brief Multiplies a position with a float
     *
     * @param reductionRation The multiplication ratio
     * @param pos_ The position
     * @return The resulted position
     */
    friend pos operator *(const float & reductionRation, const pos & pos_) {
        return pos_*(reductionRation);
    }
};

#endif // POS_H
