//
// kakipee: InfoNES Advance V0_Hazuki�p ROM�������݃c�[��
//
// Copyright (C) Jay's Factory 2002
//

#include <stdio.h>

int main(int argc, char* argv[])
{
  FILE *fp1, *fp2;
  char buf[ 16 ];
  int i;

  // �J�n����
  if ( ( fp1 = fopen("InfoNES.mb.gba", "r+b" ) ) == NULL )
  {
    printf( "Can't open InfoNES.mb.gba.\n" );
    return -1;
  }

  if ( argc != 2 || ( fp2 = fopen(argv[1], "rb" ) ) == NULL )
  {
    printf( "Can't open ROM file.\n" );
    return -1;
  }

  // �J�n�ʒu�̐ݒ�
  fseek( fp1, 0x130f1, SEEK_SET );

  printf ("Now writing ");

  // �o�b�t�@�T�C�Y���ɓǂݍ���
  // ROM�T�C�Y���o�b�t�@�T�C�Y�Ŋ���؂�Ȃ��Ɛ���ɓ����Ȃ�
  i = fread( buf, sizeof buf, 1, fp2 );
  while ( i > 0 )
  {
    // �o�b�t�@�T�C�Y���ɏ�������
    fwrite( buf, sizeof buf, i, fp1 );
    i = fread( buf, sizeof buf, 1, fp2 );
    printf (".");
  }
  printf(" done.\n");

  // �I������
  fflush( fp1 );
  fclose( fp1 );
  fclose( fp2 );

	return 0;
}
