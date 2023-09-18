
#include "gtest/gtest.h"
#include "voice_recognition.h"

TEST(VoiceRecognitionTest, RecognizesCommand) {
    VoiceRecognition vr;
    std::string command = "Turn on the lights";
    vr.processVoiceInput(command);
    EXPECT_EQ(vr.getLastCommand(), "Turn on the lights");
}

TEST(VoiceRecognitionTest, HandlesNoInput) {
    VoiceRecognition vr;
    std::string command = "";
    vr.processVoiceInput(command);
    EXPECT_EQ(vr.getLastCommand(), "");
}

TEST(VoiceRecognitionTest, HandlesInvalidInput) {
    VoiceRecognition vr;
    std::string command = "Invalid command";
    vr.processVoiceInput(command);
    EXPECT_EQ(vr.getLastCommand(), "");
}
