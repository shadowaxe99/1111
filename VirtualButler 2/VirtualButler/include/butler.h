
#ifndef BUTLER_H
#define BUTLER_H

#include <QObject>
#include <QVector3D>

class Butler : public QObject
{
    Q_OBJECT

public:
    explicit Butler(QObject *parent = nullptr);

    Q_PROPERTY(QVector3D position READ position WRITE setPosition NOTIFY positionChanged)
    Q_PROPERTY(float rotation READ rotation WRITE setRotation NOTIFY rotationChanged)

    QVector3D position() const;
    void setPosition(const QVector3D &position);

    float rotation() const;
    void setRotation(float rotation);

signals:
    void positionChanged();
    void rotationChanged();

private:
    QVector3D m_position;
    float m_rotation;
};

#endif // BUTLER_H
