import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
import streamlit as st

# importando os dados
dados = pd.read_csv ('dados.csv')

#gráfico de linhas dos dados de temperatura usando Matplotlib
st.title("Dados da estação meteorológica")
st.write("Aqui estão os dados de temperatura:")
fig, ax = plt.subplots()
ax.plot(data["Time"], data["Indoor Temperature(°C)"])
st.pyplot(fig)


