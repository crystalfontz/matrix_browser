#include <QtGui>
#include <QWebView>
#include <QGraphicsWebView>
#include <iostream> 

int main(int argc, char **argv)
{
  QApplication app(argc, argv);
  QStringList args = app.arguments();
  if (args.count() != 2)
  {
    std::cerr << "You need to pass the URL you want to view\n" << endl;
    return 1;
  }

  QWebView view;
  view.load(QUrl(args[1]));
  view.setContextMenuPolicy(Qt::NoContextMenu);
  view.setWindowFlags(Qt::FramelessWindowHint);
  view.showMaximized();
  view.show();
  return app.exec();
}
