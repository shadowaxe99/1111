# Import necessary modules
from flask import Flask, request, jsonify
from voice_recognition import VoiceRecognition

# Initialize Flask app and VoiceRecognition
app = Flask(__name__)
voice_recognition = VoiceRecognition()

# Define route for voice recognition
@app.route('/recognize', methods=['POST'])
def recognize():
    # Get audio file from request
    audio_file = request.files['audio']
    # Use voice recognition to transcribe audio file
    text, confidence = voice_recognition.recognize(audio_file)
    # Return transcription and confidence as JSON
    return jsonify({'text': text, 'confidence': confidence})

# Run the app
if __name__ == '__main__':
    app.run(host='0.0.0.0', port=6000)