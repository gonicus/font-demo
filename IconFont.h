#ifndef ICONFONT_H
#define ICONFONT_H

#include <QObject>
#include <QtQml>

class IconFontResolver : public QObject {
    Q_OBJECT
    QML_ELEMENT

public:
    explicit IconFontResolver(QObject* parent = nullptr);
    virtual ~IconFontResolver() {}

    Q_INVOKABLE quint16 indexOfPath(const QString& iconPath);
};

#endif
