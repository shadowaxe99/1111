
#ifndef VOICE_RECOGNITION_H
#define VOICE_RECOGNITION_H

#include <QObject>
#include <QAudioInput>

class VoiceRecognition : public QObject
{
    Q_OBJECT

public:
    explicit VoiceRecognition(QObject *parent = nullptr);
    ~VoiceRecognition();

    void startListening();
    void stopListening();

signals:
    void commandRecognized(QString command);

private slots:
    void processAudioBuffer();

private:
    QAudioInput* audioInput;
};

#endif // VOICE_RECOGNITION_H
