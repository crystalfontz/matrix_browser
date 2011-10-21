#include <QtGui>
#include <QWebView>
#include <QGraphicsWebView>
int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  QWebView view;
  view.load(QUrl("http://localhost:8080"));
  view.setContextMenuPolicy(Qt::NoContextMenu);
  view.setWindowFlags(Qt::FramelessWindowHint);
  view.showMaximized();
  view.show();
  return app.exec();
}



