#ifndef RENDER_ENGINE_INTERVAL_H
#define RENDER_ENGINE_INTERVAL_H

class interval {
    public:
    double min, max;

    interval() : min(+infinity), max(-infinity) {}

    interval(double _min, double _max) : min(_min), max(_max) {}

    [[nodiscard]] bool contains(double x) const {
        return min <= x && x <= max;
    }

    [[nodiscard]] bool surrounds(double x)  const{
        return min < x && x < max;
    }

    [[nodiscard]] double clamp(double x) const {
        if (x < min) return min;
        if (x > max) return max;
        return x;
    }

    static const interval empty, universe;
};

const static interval empty (+infinity, -infinity);
const static interval universe (-infinity, +infinity);

#endif //RENDER_ENGINE_INTERVAL_H
