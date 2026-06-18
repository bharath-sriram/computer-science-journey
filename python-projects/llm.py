from google import genai

client = genai.Client(api_key = "") #Enter your Google API key here.

print("----------AI (LLM) Chatbot Test----------")

while True:
    user_prompt = input("User: ")

    if user_prompt in ['exit', 'quit', 'leave']:
        print("AI: Goodbye!\n")
        break

    elif user_prompt.split() == "":
        print("AI: Please enter valid input.")

    else:
        response = client.models.generate_content(
            contents = user_prompt,
            model = 'gemini-2.5-flash'
        )
        print("AI: ", response.text, '\n')
