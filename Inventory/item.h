#ifndef ITEM_H
#define ITEM_H

#include <QString>

class Item {
public:
    Item();
    Item(QString name, int quantity, QString imageFilePath);

    QString getName() const;
    int getQuantity() const;
    QString getFilePath() const;

    void setName(QString name);
    void setQuantity(int quantity);
    void setFilePath(QString filePath);

private:
   QString name;
   int quantity;
   QString imageFilePath;
};

#endif // ITEM_H
