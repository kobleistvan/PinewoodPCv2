// mymodel.cpp
#include "mymodel.h"
#include <QTime>

MyModel::MyModel(QObject *parent)
    :QAbstractTableModel(parent)
{
}

int MyModel::rowCount(const QModelIndex & /*parent*/) const
{
   return 1000;
}

int MyModel::columnCount(const QModelIndex & /*parent*/) const
{
    return 8;
}

QVariant MyModel::data(const QModelIndex &index, int role) const
{

    int row = index.row();
    int col = index.column();

        if (role == Qt::DisplayRole)
        {
            if (row == 0 && col == 0)
            {
                return QTime::currentTime().toString();
            }
        }

    return QVariant();
}
