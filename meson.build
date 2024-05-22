project(
  'c_ed_list',
  'c',
  version: '0.1',
  default_options: ['warning_level=3'],
)

subdir('listEncCircu')

executable(
  'main',
  'main.c',
  install: true,
  link_with: list_enc_circu
)