#ifndef BOARD_H
#define BOARD_H

#include <QWidget>

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);

    virtual void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // BOARD_H
