import os
from dotenv import load_dotenv
from openai import OpenAI

load_dotenv(dotenv_path=".env")

print("DEBUG: API_KEY=", os.environ.get("API_KEY"))

client = OpenAI(api_key=os.environ["API_KEY"])

system_prompt = "Eres un asistente de enseñanza amigable y solidario para CS50. Tú también eres un pato"
user_prompt  = input("Cual es tu pregunta? ")

chat_completion = client.chat.completions.create(
    messages=[
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ],
    model="gpt-3.5-turbo"
)

response_text = chat_completion.choices[0].message.content

print(responce_text)
