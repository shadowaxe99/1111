
#include "voice_recognition.h"
#include <QtSpeech>

VoiceRecognition::VoiceRecognition(QObject *parent) : QObject(parent)
{
    recognizer = new QSpeechRecognizer(this);
    connect(recognizer, &QSpeechRecognizer::finished, this, &VoiceRecognition::onRecognitionFinished);
    connect(recognizer, &QSpeechRecognizer::error, this, &VoiceRecognition::onRecognitionError);
}

void VoiceRecognition::startRecognition()
{
    recognizer->start();
}

void VoiceRecognition::stopRecognition()
{
    recognizer->stop();
}

void VoiceRecognition::onRecognitionFinished(const QString &text)
{
    emit recognitionFinished(text);
}

void VoiceRecognition::onRecognitionError(QSpeechRecognizer::Error error)
{
    emit recognitionError(error);
}
