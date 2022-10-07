#include "item.h"

Item::Item() {

}

Item::Item(QString name, int quantity, QString imageFilePath) {
    this->name = name;
    this->quantity = quantity;
    this->imageFilePath = imageFilePath;
}

QString Item::getName() const {
    return this->name;
}

int Item::getQuantity() const{
    return this->quantity;

}

QString Item::getFilePath() const{
    return this->imageFilePath;
}

void Item::setName(QString name) {
    this->name = name;

}

void Item::setQuantity(int quantity) {
    this->quantity = quantity;
}

void Item::setFilePath(QString filePath) {
    this->imageFilePath = filePath;
}
