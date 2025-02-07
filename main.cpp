#include <QApplication>
#include <QPushButton>
#include "bitboard_utility.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Hello, World!");

    getBit(1, 1);

    button.resize(200, 100);
    button.show();

    return app.exec();
}
