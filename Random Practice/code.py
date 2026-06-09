print("Code is running 🚀")

import requests

print("Starting request...")

url = "https://www.fast2sms.com/dev/bulkV2"

data = {
    "authorization": "u1nNLa0zeEpQiRom2VbYJ9cftG8UdvM4I7PHyhlBWgC3kSZAjrLWyIlJ0jepV9cKZxEPA5TrogNFfw1R",
    "sender_id": "FSTSMS",
    "message": "Test OTP 123456",
    "language": "english",
    "route": "q",
    "numbers": "6392634032"
}

response = requests.post(url, data=data)

print("Status Code:", response.status_code)
print("Response:", response.text)
