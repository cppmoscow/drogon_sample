FROM drogonframework/drogon:latest as build

ADD . /app/

WORKDIR /app/build

RUN cmake .. && \
    cmake --build .

CMD [ "./drogon_sample" ]