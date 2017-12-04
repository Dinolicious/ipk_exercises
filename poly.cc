#include <iostream>
#include <vector>
#include <cmath>

struct Point{                                                                           //Speichern der Koordinaten der Punkte
    double x, y;

    Point (double x, double y): x(x), y(y) {}
};

struct Polygon{                                                                         //Enthält Vector von Point
    std::vector<Point> v;
};

Polygon construct(const std::vector<double> &x, const std::vector<double> &y){          //Funktion - x,y als Koordinaten
    Polygon pOut;
    if (x.size() != y.size()){                                                          //Fehlerhafte Eingabe abfangen
        std::cout << "Error! Not same amount of x and y!\n";
    }
    else{                                                                               //Korrekte Eingabe weiterverarbeiten
        for (int i = 0; i < x.size(); i++){
            Point p = Point(x[i], y[i]);
            pOut.v.push_back(p);

            std::cout << "New Point: (" << x[i] << ", " << y[i] << ")\n";               //Neue Punkte ausgeben
        }
    }

    return pOut;
}
double volume (const Polygon &polygon){                                                 //Volumen der Polygone bestimmen
    if (polygon.v.size() < 3){                                                          
        return 0;
    }
    else{                                                                               //Berechnung Fläche des Polygons
        std::vector<Point> v = polygon.v;
        int n = v.size();

        double  sum = 0;

        for (int i = 0; i < n; i++){
            sum += (v[i].x * v[i + 1].y) - (v[i + 1].x * v[i].y);
        }

        return 0.5 * sum;
    }
}

int main(){                                                                             
    const double pi = 3.14159265359;

    std::vector<double> x, y;
    double n;

    std::cout << "n: ";                                                                 //Eingabe Anzahl an Punkten
    std::cin >> n;

    for (double i = 1; i <= n; i++){                                                    //Berechnung der Punktkoordinaten
        x.push_back(cos((i / n) * (2 * pi)));
        y.push_back(sin((i / n) * (2 * pi)));
    }

    Polygon polygon = construct(x, y);

    std::cout << "A = " << volume(polygon);                                             //Ausgabe der Fläche

    return 0;
}