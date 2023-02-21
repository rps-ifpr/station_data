import streamlit as st
import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("Mdados\emissions.csv")

top_countries = data.groupby("Country")["CO2 Emissions (kt)"].sum().nlargest(5)

fig, ax = plt.subplots()
ax.bar(top_countries.index, top_countries.values)
ax.set_xlabel("Country")
ax.set_ylabel("CO2 Emissions (kt)")

st.pyplot(fig)
