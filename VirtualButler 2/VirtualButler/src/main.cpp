
#include <QApplication>
#include "butler.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Butler butler;
    butler.show();

    return app.exec();
}
