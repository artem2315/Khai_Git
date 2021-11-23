#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QLabel *label = new QLabel («<h2><i>Hello, tovarish </i></h2>»);
Label - >show( );
 
return app.exec( );
}
