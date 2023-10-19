#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGES 100

struct Message {
    char username[50];
    char text[255];
};

struct MessageBoard {
    struct Message messages[MAX_MESSAGES];
    int messageCount;
};

void postMessage(struct MessageBoard *board, const char *username, const char *text) {
    if (board->messageCount < MAX_MESSAGES) {
        struct Message *message = &board->messages[board->messageCount];
        strncpy(message->username, username, sizeof(message->username));
        strncpy(message->text, text, sizeof(message->text));
        board->messageCount++;
    } else {
        printf("掲示板が満杯です。新しいメッセージを投稿できません。\n");
    }
}

void displayMessages(const struct MessageBoard *board) {
    printf("========== 掲示板 ==========\n");
    for (int i = 0; i < board->messageCount; ++i) {
        printf("ユーザー名: %s\n", board->messages[i].username);
        printf("メッセージ: %s\n", board->messages[i].text);
        printf("---------------------------\n");
    }
}

int main() {
    struct MessageBoard board;
    board.messageCount = 0;

    char username[50];
    char text[255];

    printf("ユーザー名を入力してください: ");
    scanf("%s", username);
    printf("メッセージを入力してください (最大255文字): ");
    scanf(" %[^\n]s", text);

    postMessage(&board, username, text);
    displayMessages(&board);

    return 0;
}
