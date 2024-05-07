#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 427
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 61
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 69

enum {
  anon_sym_LF = 1,
  aux_sym_from_instruction_token1 = 2,
  aux_sym_from_instruction_token2 = 3,
  aux_sym_run_instruction_token1 = 4,
  aux_sym_cmd_instruction_token1 = 5,
  aux_sym_label_instruction_token1 = 6,
  aux_sym_expose_instruction_token1 = 7,
  aux_sym_env_instruction_token1 = 8,
  aux_sym_add_instruction_token1 = 9,
  aux_sym_copy_instruction_token1 = 10,
  aux_sym_entrypoint_instruction_token1 = 11,
  aux_sym_volume_instruction_token1 = 12,
  aux_sym_user_instruction_token1 = 13,
  anon_sym_COLON = 14,
  aux_sym_user_name_or_group_token1 = 15,
  aux_sym_immediate_user_name_or_group_fragment_token1 = 16,
  aux_sym_workdir_instruction_token1 = 17,
  aux_sym_arg_instruction_token1 = 18,
  aux_sym_arg_instruction_token2 = 19,
  anon_sym_EQ = 20,
  aux_sym_onbuild_instruction_token1 = 21,
  aux_sym_stopsignal_instruction_token1 = 22,
  aux_sym_stopsignal_value_token1 = 23,
  aux_sym_stopsignal_value_token2 = 24,
  aux_sym_healthcheck_instruction_token1 = 25,
  anon_sym_NONE = 26,
  aux_sym_shell_instruction_token1 = 27,
  aux_sym_maintainer_instruction_token1 = 28,
  aux_sym_maintainer_instruction_token2 = 29,
  aux_sym_cross_build_instruction_token1 = 30,
  aux_sym_path_token1 = 31,
  aux_sym_path_token2 = 32,
  aux_sym_path_token3 = 33,
  aux_sym_path_with_heredoc_token1 = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_DOLLAR2 = 36,
  anon_sym_LBRACE = 37,
  aux_sym_expansion_body_token1 = 38,
  anon_sym_RBRACE = 39,
  sym_variable = 40,
  aux_sym_spaced_env_pair_token1 = 41,
  aux_sym_env_key_token1 = 42,
  aux_sym_expose_port_token1 = 43,
  anon_sym_SLASHtcp = 44,
  anon_sym_SLASHudp = 45,
  aux_sym_label_pair_token1 = 46,
  aux_sym_image_name_token1 = 47,
  aux_sym_image_name_token2 = 48,
  aux_sym_image_tag_token1 = 49,
  anon_sym_AT = 50,
  aux_sym_image_digest_token1 = 51,
  anon_sym_DASH_DASH = 52,
  aux_sym_param_token1 = 53,
  aux_sym_param_token2 = 54,
  anon_sym_mount = 55,
  anon_sym_COMMA = 56,
  aux_sym_mount_param_param_token1 = 57,
  aux_sym_image_alias_token1 = 58,
  aux_sym_image_alias_token2 = 59,
  aux_sym_shell_fragment_token1 = 60,
  aux_sym_shell_fragment_token2 = 61,
  aux_sym_shell_fragment_token3 = 62,
  aux_sym_shell_fragment_token4 = 63,
  sym_line_continuation = 64,
  sym_required_line_continuation = 65,
  anon_sym_LBRACK = 66,
  anon_sym_COMMA2 = 67,
  anon_sym_RBRACK = 68,
  anon_sym_DQUOTE = 69,
  aux_sym_json_string_token1 = 70,
  sym_json_escape_sequence = 71,
  aux_sym_double_quoted_string_token1 = 72,
  anon_sym_BSLASH = 73,
  anon_sym_SQUOTE = 74,
  aux_sym_single_quoted_string_token1 = 75,
  aux_sym_unquoted_string_token1 = 76,
  anon_sym_BSLASH2 = 77,
  sym_double_quoted_escape_sequence = 78,
  sym_single_quoted_escape_sequence = 79,
  sym_non_newline_whitespace = 80,
  sym_comment = 81,
  sym_semgrep_metavariable = 82,
  sym_semgrep_ellipsis = 83,
  sym_heredoc_marker = 84,
  sym_heredoc_line = 85,
  sym_heredoc_end = 86,
  sym_heredoc_nl = 87,
  sym_error_sentinel = 88,
  sym_source_file = 89,
  sym_instruction = 90,
  sym_from_instruction = 91,
  sym_run_instruction = 92,
  sym_cmd_instruction = 93,
  sym_label_instruction = 94,
  sym_expose_instruction = 95,
  sym_env_instruction = 96,
  sym_add_instruction = 97,
  sym_copy_instruction = 98,
  sym_entrypoint_instruction = 99,
  sym_volume_instruction = 100,
  sym_user_instruction = 101,
  sym_user_name_or_group = 102,
  sym_immediate_user_name_or_group = 103,
  sym_immediate_user_name_or_group_fragment = 104,
  sym_workdir_instruction = 105,
  sym_arg_instruction = 106,
  sym_onbuild_instruction = 107,
  sym_stopsignal_instruction = 108,
  sym_stopsignal_value = 109,
  sym_healthcheck_instruction = 110,
  sym_shell_instruction = 111,
  sym_maintainer_instruction = 112,
  sym_cross_build_instruction = 113,
  sym_heredoc_block = 114,
  sym_path = 115,
  sym_path_with_heredoc = 116,
  sym_expansion = 117,
  sym_immediate_expansion = 118,
  sym_imm_expansion = 119,
  sym_expansion_body = 120,
  sym_env_pair = 121,
  sym_spaced_env_pair = 122,
  sym_env_key = 123,
  sym_expose_port = 124,
  sym_label_pair = 125,
  sym_image_spec = 126,
  sym_image_name = 127,
  sym_image_tag = 128,
  sym_image_digest = 129,
  sym_param = 130,
  sym_mount_param = 131,
  sym_mount_param_param = 132,
  sym_image_alias = 133,
  sym_shell_command = 134,
  sym_shell_fragment = 135,
  sym_json_string_array = 136,
  sym_json_string = 137,
  sym_double_quoted_string = 138,
  sym_single_quoted_string = 139,
  sym_unquoted_string = 140,
  sym_array_element = 141,
  aux_sym_source_file_repeat1 = 142,
  aux_sym_run_instruction_repeat1 = 143,
  aux_sym_run_instruction_repeat2 = 144,
  aux_sym_label_instruction_repeat1 = 145,
  aux_sym_expose_instruction_repeat1 = 146,
  aux_sym_env_instruction_repeat1 = 147,
  aux_sym_add_instruction_repeat1 = 148,
  aux_sym_add_instruction_repeat2 = 149,
  aux_sym_volume_instruction_repeat1 = 150,
  aux_sym_user_name_or_group_repeat1 = 151,
  aux_sym_stopsignal_value_repeat1 = 152,
  aux_sym_heredoc_block_repeat1 = 153,
  aux_sym_path_repeat1 = 154,
  aux_sym_image_name_repeat1 = 155,
  aux_sym_image_tag_repeat1 = 156,
  aux_sym_image_digest_repeat1 = 157,
  aux_sym_mount_param_repeat1 = 158,
  aux_sym_image_alias_repeat1 = 159,
  aux_sym_shell_command_repeat1 = 160,
  aux_sym_shell_fragment_repeat1 = 161,
  aux_sym_json_string_array_repeat1 = 162,
  aux_sym_json_string_repeat1 = 163,
  aux_sym_double_quoted_string_repeat1 = 164,
  aux_sym_single_quoted_string_repeat1 = 165,
  aux_sym_unquoted_string_repeat1 = 166,
  alias_sym_imm_tok_at = 167,
  alias_sym_imm_tok_bslashspace = 168,
  alias_sym_imm_tok_colon = 169,
  alias_sym_imm_tok_comma = 170,
  alias_sym_imm_tok_dollar = 171,
  alias_sym_imm_tok_eq = 172,
  alias_sym_imm_tok_lcurl = 173,
  alias_sym_imm_tok_mount = 174,
  alias_sym_imm_tok_pat_0ab9261 = 175,
  alias_sym_imm_tok_pat_0c7fc22 = 176,
  alias_sym_imm_tok_pat_2b37705 = 177,
  alias_sym_imm_tok_pat_3a2a380 = 178,
  alias_sym_imm_tok_pat_3d340f6 = 179,
  alias_sym_imm_tok_pat_441cd81 = 180,
  alias_sym_imm_tok_pat_589b0f8 = 181,
  alias_sym_imm_tok_pat_7642c4f = 182,
  alias_sym_imm_tok_pat_8713919 = 183,
  alias_sym_imm_tok_pat_9a14b5c = 184,
  alias_sym_imm_tok_pat_9f6bbb9 = 185,
  alias_sym_imm_tok_pat_bcfc287 = 186,
  alias_sym_imm_tok_pat_d2727a0 = 187,
  alias_sym_imm_tok_pat_f43f746 = 188,
  alias_sym_imm_tok_pat_f46f69d = 189,
  alias_sym_imm_tok_pat_f6e1de8 = 190,
  alias_sym_imm_tok_rcurl = 191,
  alias_sym_pat_05444c2 = 192,
  alias_sym_pat_0851d06 = 193,
  alias_sym_pat_2b6adbc = 194,
  alias_sym_pat_4128122 = 195,
  alias_sym_pat_441cd81 = 196,
  alias_sym_pat_4a2f38a = 197,
  alias_sym_pat_4de4cb9 = 198,
  alias_sym_pat_4fd4a56 = 199,
  alias_sym_pat_8165e5f = 200,
  alias_sym_pat_9873c86 = 201,
  alias_sym_pat_9a14b5c = 202,
  alias_sym_pat_a667757 = 203,
  alias_sym_pat_add = 204,
  alias_sym_pat_arg = 205,
  alias_sym_pat_as = 206,
  alias_sym_pat_b1120d3 = 207,
  alias_sym_pat_cmd = 208,
  alias_sym_pat_copy = 209,
  alias_sym_pat_e0f3805 = 210,
  alias_sym_pat_ea34a52 = 211,
  alias_sym_pat_eda9032 = 212,
  alias_sym_pat_entr = 213,
  alias_sym_pat_env = 214,
  alias_sym_pat_expose = 215,
  alias_sym_pat_f8ab07f = 216,
  alias_sym_pat_from = 217,
  alias_sym_pat_heal = 218,
  alias_sym_pat_label = 219,
  alias_sym_pat_main = 220,
  alias_sym_pat_onbu = 221,
  alias_sym_pat_run = 222,
  alias_sym_pat_shell = 223,
  alias_sym_pat_stop = 224,
  alias_sym_pat_user = 225,
  alias_sym_pat_volume = 226,
  alias_sym_pat_work = 227,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [aux_sym_from_instruction_token1] = "from_instruction_token1",
  [aux_sym_from_instruction_token2] = "from_instruction_token2",
  [aux_sym_run_instruction_token1] = "run_instruction_token1",
  [aux_sym_cmd_instruction_token1] = "cmd_instruction_token1",
  [aux_sym_label_instruction_token1] = "label_instruction_token1",
  [aux_sym_expose_instruction_token1] = "expose_instruction_token1",
  [aux_sym_env_instruction_token1] = "env_instruction_token1",
  [aux_sym_add_instruction_token1] = "add_instruction_token1",
  [aux_sym_copy_instruction_token1] = "copy_instruction_token1",
  [aux_sym_entrypoint_instruction_token1] = "entrypoint_instruction_token1",
  [aux_sym_volume_instruction_token1] = "volume_instruction_token1",
  [aux_sym_user_instruction_token1] = "user_instruction_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_or_group_token1] = "user_name_or_group_token1",
  [aux_sym_immediate_user_name_or_group_fragment_token1] = "immediate_user_name_or_group_fragment_token1",
  [aux_sym_workdir_instruction_token1] = "workdir_instruction_token1",
  [aux_sym_arg_instruction_token1] = "arg_instruction_token1",
  [aux_sym_arg_instruction_token2] = "arg_instruction_token2",
  [anon_sym_EQ] = "=",
  [aux_sym_onbuild_instruction_token1] = "onbuild_instruction_token1",
  [aux_sym_stopsignal_instruction_token1] = "stopsignal_instruction_token1",
  [aux_sym_stopsignal_value_token1] = "stopsignal_value_token1",
  [aux_sym_stopsignal_value_token2] = "stopsignal_value_token2",
  [aux_sym_healthcheck_instruction_token1] = "healthcheck_instruction_token1",
  [anon_sym_NONE] = "NONE",
  [aux_sym_shell_instruction_token1] = "shell_instruction_token1",
  [aux_sym_maintainer_instruction_token1] = "maintainer_instruction_token1",
  [aux_sym_maintainer_instruction_token2] = "maintainer_instruction_token2",
  [aux_sym_cross_build_instruction_token1] = "cross_build_instruction_token1",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_path_token3] = "path_token3",
  [aux_sym_path_with_heredoc_token1] = "path_with_heredoc_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expansion_body_token1] = "expansion_body_token1",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [aux_sym_spaced_env_pair_token1] = "spaced_env_pair_token1",
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_expose_port_token1] = "expose_port_token1",
  [anon_sym_SLASHtcp] = "/tcp",
  [anon_sym_SLASHudp] = "/udp",
  [aux_sym_label_pair_token1] = "label_pair_token1",
  [aux_sym_image_name_token1] = "image_name_token1",
  [aux_sym_image_name_token2] = "image_name_token2",
  [aux_sym_image_tag_token1] = "image_tag_token1",
  [anon_sym_AT] = "@",
  [aux_sym_image_digest_token1] = "image_digest_token1",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_param_token1] = "param_token1",
  [aux_sym_param_token2] = "param_token2",
  [anon_sym_mount] = "mount",
  [anon_sym_COMMA] = ",",
  [aux_sym_mount_param_param_token1] = "mount_param_param_token1",
  [aux_sym_image_alias_token1] = "image_alias_token1",
  [aux_sym_image_alias_token2] = "image_alias_token2",
  [aux_sym_shell_fragment_token1] = "shell_fragment_token1",
  [aux_sym_shell_fragment_token2] = "shell_fragment_token2",
  [aux_sym_shell_fragment_token3] = "shell_fragment_token3",
  [aux_sym_shell_fragment_token4] = "shell_fragment_token4",
  [sym_line_continuation] = "line_continuation",
  [sym_required_line_continuation] = "required_line_continuation",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_json_string_token1] = "json_string_token1",
  [sym_json_escape_sequence] = "json_escape_sequence",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH2] = "\\ ",
  [sym_double_quoted_escape_sequence] = "double_quoted_escape_sequence",
  [sym_single_quoted_escape_sequence] = "single_quoted_escape_sequence",
  [sym_non_newline_whitespace] = "non_newline_whitespace",
  [sym_comment] = "comment",
  [sym_semgrep_metavariable] = "semgrep_metavariable",
  [sym_semgrep_ellipsis] = "semgrep_ellipsis",
  [sym_heredoc_marker] = "heredoc_marker",
  [sym_heredoc_line] = "heredoc_line",
  [sym_heredoc_end] = "heredoc_end",
  [sym_heredoc_nl] = "heredoc_nl",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym_instruction] = "instruction",
  [sym_from_instruction] = "from_instruction",
  [sym_run_instruction] = "run_instruction",
  [sym_cmd_instruction] = "cmd_instruction",
  [sym_label_instruction] = "label_instruction",
  [sym_expose_instruction] = "expose_instruction",
  [sym_env_instruction] = "env_instruction",
  [sym_add_instruction] = "add_instruction",
  [sym_copy_instruction] = "copy_instruction",
  [sym_entrypoint_instruction] = "entrypoint_instruction",
  [sym_volume_instruction] = "volume_instruction",
  [sym_user_instruction] = "user_instruction",
  [sym_user_name_or_group] = "user_name_or_group",
  [sym_immediate_user_name_or_group] = "immediate_user_name_or_group",
  [sym_immediate_user_name_or_group_fragment] = "immediate_user_name_or_group_fragment",
  [sym_workdir_instruction] = "workdir_instruction",
  [sym_arg_instruction] = "arg_instruction",
  [sym_onbuild_instruction] = "onbuild_instruction",
  [sym_stopsignal_instruction] = "stopsignal_instruction",
  [sym_stopsignal_value] = "stopsignal_value",
  [sym_healthcheck_instruction] = "healthcheck_instruction",
  [sym_shell_instruction] = "shell_instruction",
  [sym_maintainer_instruction] = "maintainer_instruction",
  [sym_cross_build_instruction] = "cross_build_instruction",
  [sym_heredoc_block] = "heredoc_block",
  [sym_path] = "path",
  [sym_path_with_heredoc] = "path_with_heredoc",
  [sym_expansion] = "expansion",
  [sym_immediate_expansion] = "immediate_expansion",
  [sym_imm_expansion] = "imm_expansion",
  [sym_expansion_body] = "expansion_body",
  [sym_env_pair] = "env_pair",
  [sym_spaced_env_pair] = "spaced_env_pair",
  [sym_env_key] = "env_key",
  [sym_expose_port] = "expose_port",
  [sym_label_pair] = "label_pair",
  [sym_image_spec] = "image_spec",
  [sym_image_name] = "image_name",
  [sym_image_tag] = "image_tag",
  [sym_image_digest] = "image_digest",
  [sym_param] = "param",
  [sym_mount_param] = "mount_param",
  [sym_mount_param_param] = "mount_param_param",
  [sym_image_alias] = "image_alias",
  [sym_shell_command] = "shell_command",
  [sym_shell_fragment] = "shell_fragment",
  [sym_json_string_array] = "json_string_array",
  [sym_json_string] = "json_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym_array_element] = "array_element",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_instruction_repeat1] = "run_instruction_repeat1",
  [aux_sym_run_instruction_repeat2] = "run_instruction_repeat2",
  [aux_sym_label_instruction_repeat1] = "label_instruction_repeat1",
  [aux_sym_expose_instruction_repeat1] = "expose_instruction_repeat1",
  [aux_sym_env_instruction_repeat1] = "env_instruction_repeat1",
  [aux_sym_add_instruction_repeat1] = "add_instruction_repeat1",
  [aux_sym_add_instruction_repeat2] = "add_instruction_repeat2",
  [aux_sym_volume_instruction_repeat1] = "volume_instruction_repeat1",
  [aux_sym_user_name_or_group_repeat1] = "user_name_or_group_repeat1",
  [aux_sym_stopsignal_value_repeat1] = "stopsignal_value_repeat1",
  [aux_sym_heredoc_block_repeat1] = "heredoc_block_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_image_name_repeat1] = "image_name_repeat1",
  [aux_sym_image_tag_repeat1] = "image_tag_repeat1",
  [aux_sym_image_digest_repeat1] = "image_digest_repeat1",
  [aux_sym_mount_param_repeat1] = "mount_param_repeat1",
  [aux_sym_image_alias_repeat1] = "image_alias_repeat1",
  [aux_sym_shell_command_repeat1] = "shell_command_repeat1",
  [aux_sym_shell_fragment_repeat1] = "shell_fragment_repeat1",
  [aux_sym_json_string_array_repeat1] = "json_string_array_repeat1",
  [aux_sym_json_string_repeat1] = "json_string_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
  [alias_sym_imm_tok_at] = "imm_tok_at",
  [alias_sym_imm_tok_bslashspace] = "imm_tok_bslashspace",
  [alias_sym_imm_tok_colon] = "imm_tok_colon",
  [alias_sym_imm_tok_comma] = "imm_tok_comma",
  [alias_sym_imm_tok_dollar] = "imm_tok_dollar",
  [alias_sym_imm_tok_eq] = "imm_tok_eq",
  [alias_sym_imm_tok_lcurl] = "imm_tok_lcurl",
  [alias_sym_imm_tok_mount] = "imm_tok_mount",
  [alias_sym_imm_tok_pat_0ab9261] = "imm_tok_pat_0ab9261",
  [alias_sym_imm_tok_pat_0c7fc22] = "imm_tok_pat_0c7fc22",
  [alias_sym_imm_tok_pat_2b37705] = "imm_tok_pat_2b37705",
  [alias_sym_imm_tok_pat_3a2a380] = "imm_tok_pat_3a2a380",
  [alias_sym_imm_tok_pat_3d340f6] = "imm_tok_pat_3d340f6",
  [alias_sym_imm_tok_pat_441cd81] = "imm_tok_pat_441cd81",
  [alias_sym_imm_tok_pat_589b0f8] = "imm_tok_pat_589b0f8",
  [alias_sym_imm_tok_pat_7642c4f] = "imm_tok_pat_7642c4f",
  [alias_sym_imm_tok_pat_8713919] = "imm_tok_pat_8713919",
  [alias_sym_imm_tok_pat_9a14b5c] = "imm_tok_pat_9a14b5c",
  [alias_sym_imm_tok_pat_9f6bbb9] = "imm_tok_pat_9f6bbb9",
  [alias_sym_imm_tok_pat_bcfc287] = "imm_tok_pat_bcfc287",
  [alias_sym_imm_tok_pat_d2727a0] = "imm_tok_pat_d2727a0",
  [alias_sym_imm_tok_pat_f43f746] = "imm_tok_pat_f43f746",
  [alias_sym_imm_tok_pat_f46f69d] = "imm_tok_pat_f46f69d",
  [alias_sym_imm_tok_pat_f6e1de8] = "imm_tok_pat_f6e1de8",
  [alias_sym_imm_tok_rcurl] = "imm_tok_rcurl",
  [alias_sym_pat_05444c2] = "pat_05444c2",
  [alias_sym_pat_0851d06] = "pat_0851d06",
  [alias_sym_pat_2b6adbc] = "pat_2b6adbc",
  [alias_sym_pat_4128122] = "pat_4128122",
  [alias_sym_pat_441cd81] = "pat_441cd81",
  [alias_sym_pat_4a2f38a] = "pat_4a2f38a",
  [alias_sym_pat_4de4cb9] = "pat_4de4cb9",
  [alias_sym_pat_4fd4a56] = "pat_4fd4a56",
  [alias_sym_pat_8165e5f] = "pat_8165e5f",
  [alias_sym_pat_9873c86] = "pat_9873c86",
  [alias_sym_pat_9a14b5c] = "pat_9a14b5c",
  [alias_sym_pat_a667757] = "pat_a667757",
  [alias_sym_pat_add] = "pat_add",
  [alias_sym_pat_arg] = "pat_arg",
  [alias_sym_pat_as] = "pat_as",
  [alias_sym_pat_b1120d3] = "pat_b1120d3",
  [alias_sym_pat_cmd] = "pat_cmd",
  [alias_sym_pat_copy] = "pat_copy",
  [alias_sym_pat_e0f3805] = "pat_e0f3805",
  [alias_sym_pat_ea34a52] = "pat_ea34a52",
  [alias_sym_pat_eda9032] = "pat_eda9032",
  [alias_sym_pat_entr] = "pat_entr",
  [alias_sym_pat_env] = "pat_env",
  [alias_sym_pat_expose] = "pat_expose",
  [alias_sym_pat_f8ab07f] = "pat_f8ab07f",
  [alias_sym_pat_from] = "pat_from",
  [alias_sym_pat_heal] = "pat_heal",
  [alias_sym_pat_label] = "pat_label",
  [alias_sym_pat_main] = "pat_main",
  [alias_sym_pat_onbu] = "pat_onbu",
  [alias_sym_pat_run] = "pat_run",
  [alias_sym_pat_shell] = "pat_shell",
  [alias_sym_pat_stop] = "pat_stop",
  [alias_sym_pat_user] = "pat_user",
  [alias_sym_pat_volume] = "pat_volume",
  [alias_sym_pat_work] = "pat_work",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_from_instruction_token1] = aux_sym_from_instruction_token1,
  [aux_sym_from_instruction_token2] = aux_sym_from_instruction_token2,
  [aux_sym_run_instruction_token1] = aux_sym_run_instruction_token1,
  [aux_sym_cmd_instruction_token1] = aux_sym_cmd_instruction_token1,
  [aux_sym_label_instruction_token1] = aux_sym_label_instruction_token1,
  [aux_sym_expose_instruction_token1] = aux_sym_expose_instruction_token1,
  [aux_sym_env_instruction_token1] = aux_sym_env_instruction_token1,
  [aux_sym_add_instruction_token1] = aux_sym_add_instruction_token1,
  [aux_sym_copy_instruction_token1] = aux_sym_copy_instruction_token1,
  [aux_sym_entrypoint_instruction_token1] = aux_sym_entrypoint_instruction_token1,
  [aux_sym_volume_instruction_token1] = aux_sym_volume_instruction_token1,
  [aux_sym_user_instruction_token1] = aux_sym_user_instruction_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_user_name_or_group_token1] = aux_sym_user_name_or_group_token1,
  [aux_sym_immediate_user_name_or_group_fragment_token1] = aux_sym_immediate_user_name_or_group_fragment_token1,
  [aux_sym_workdir_instruction_token1] = aux_sym_workdir_instruction_token1,
  [aux_sym_arg_instruction_token1] = aux_sym_arg_instruction_token1,
  [aux_sym_arg_instruction_token2] = aux_sym_arg_instruction_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_onbuild_instruction_token1] = aux_sym_onbuild_instruction_token1,
  [aux_sym_stopsignal_instruction_token1] = aux_sym_stopsignal_instruction_token1,
  [aux_sym_stopsignal_value_token1] = aux_sym_stopsignal_value_token1,
  [aux_sym_stopsignal_value_token2] = aux_sym_stopsignal_value_token2,
  [aux_sym_healthcheck_instruction_token1] = aux_sym_healthcheck_instruction_token1,
  [anon_sym_NONE] = anon_sym_NONE,
  [aux_sym_shell_instruction_token1] = aux_sym_shell_instruction_token1,
  [aux_sym_maintainer_instruction_token1] = aux_sym_maintainer_instruction_token1,
  [aux_sym_maintainer_instruction_token2] = aux_sym_maintainer_instruction_token2,
  [aux_sym_cross_build_instruction_token1] = aux_sym_cross_build_instruction_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [aux_sym_path_token3] = aux_sym_path_token3,
  [aux_sym_path_with_heredoc_token1] = aux_sym_path_with_heredoc_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_expansion_body_token1] = aux_sym_expansion_body_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [aux_sym_spaced_env_pair_token1] = aux_sym_spaced_env_pair_token1,
  [aux_sym_env_key_token1] = aux_sym_env_key_token1,
  [aux_sym_expose_port_token1] = aux_sym_expose_port_token1,
  [anon_sym_SLASHtcp] = anon_sym_SLASHtcp,
  [anon_sym_SLASHudp] = anon_sym_SLASHudp,
  [aux_sym_label_pair_token1] = aux_sym_label_pair_token1,
  [aux_sym_image_name_token1] = aux_sym_image_name_token1,
  [aux_sym_image_name_token2] = aux_sym_image_name_token2,
  [aux_sym_image_tag_token1] = aux_sym_image_tag_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_image_digest_token1] = aux_sym_image_digest_token1,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_param_token1] = aux_sym_param_token1,
  [aux_sym_param_token2] = aux_sym_param_token2,
  [anon_sym_mount] = anon_sym_mount,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mount_param_param_token1] = aux_sym_mount_param_param_token1,
  [aux_sym_image_alias_token1] = aux_sym_image_alias_token1,
  [aux_sym_image_alias_token2] = aux_sym_image_alias_token2,
  [aux_sym_shell_fragment_token1] = aux_sym_shell_fragment_token1,
  [aux_sym_shell_fragment_token2] = aux_sym_shell_fragment_token2,
  [aux_sym_shell_fragment_token3] = aux_sym_shell_fragment_token3,
  [aux_sym_shell_fragment_token4] = aux_sym_shell_fragment_token4,
  [sym_line_continuation] = sym_line_continuation,
  [sym_required_line_continuation] = sym_required_line_continuation,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_json_string_token1] = aux_sym_json_string_token1,
  [sym_json_escape_sequence] = sym_json_escape_sequence,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH2] = anon_sym_BSLASH2,
  [sym_double_quoted_escape_sequence] = sym_double_quoted_escape_sequence,
  [sym_single_quoted_escape_sequence] = sym_single_quoted_escape_sequence,
  [sym_non_newline_whitespace] = sym_non_newline_whitespace,
  [sym_comment] = sym_comment,
  [sym_semgrep_metavariable] = sym_semgrep_metavariable,
  [sym_semgrep_ellipsis] = sym_semgrep_ellipsis,
  [sym_heredoc_marker] = sym_heredoc_marker,
  [sym_heredoc_line] = sym_heredoc_line,
  [sym_heredoc_end] = sym_heredoc_end,
  [sym_heredoc_nl] = sym_heredoc_nl,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym_instruction] = sym_instruction,
  [sym_from_instruction] = sym_from_instruction,
  [sym_run_instruction] = sym_run_instruction,
  [sym_cmd_instruction] = sym_cmd_instruction,
  [sym_label_instruction] = sym_label_instruction,
  [sym_expose_instruction] = sym_expose_instruction,
  [sym_env_instruction] = sym_env_instruction,
  [sym_add_instruction] = sym_add_instruction,
  [sym_copy_instruction] = sym_copy_instruction,
  [sym_entrypoint_instruction] = sym_entrypoint_instruction,
  [sym_volume_instruction] = sym_volume_instruction,
  [sym_user_instruction] = sym_user_instruction,
  [sym_user_name_or_group] = sym_user_name_or_group,
  [sym_immediate_user_name_or_group] = sym_immediate_user_name_or_group,
  [sym_immediate_user_name_or_group_fragment] = sym_immediate_user_name_or_group_fragment,
  [sym_workdir_instruction] = sym_workdir_instruction,
  [sym_arg_instruction] = sym_arg_instruction,
  [sym_onbuild_instruction] = sym_onbuild_instruction,
  [sym_stopsignal_instruction] = sym_stopsignal_instruction,
  [sym_stopsignal_value] = sym_stopsignal_value,
  [sym_healthcheck_instruction] = sym_healthcheck_instruction,
  [sym_shell_instruction] = sym_shell_instruction,
  [sym_maintainer_instruction] = sym_maintainer_instruction,
  [sym_cross_build_instruction] = sym_cross_build_instruction,
  [sym_heredoc_block] = sym_heredoc_block,
  [sym_path] = sym_path,
  [sym_path_with_heredoc] = sym_path_with_heredoc,
  [sym_expansion] = sym_expansion,
  [sym_immediate_expansion] = sym_immediate_expansion,
  [sym_imm_expansion] = sym_imm_expansion,
  [sym_expansion_body] = sym_expansion_body,
  [sym_env_pair] = sym_env_pair,
  [sym_spaced_env_pair] = sym_spaced_env_pair,
  [sym_env_key] = sym_env_key,
  [sym_expose_port] = sym_expose_port,
  [sym_label_pair] = sym_label_pair,
  [sym_image_spec] = sym_image_spec,
  [sym_image_name] = sym_image_name,
  [sym_image_tag] = sym_image_tag,
  [sym_image_digest] = sym_image_digest,
  [sym_param] = sym_param,
  [sym_mount_param] = sym_mount_param,
  [sym_mount_param_param] = sym_mount_param_param,
  [sym_image_alias] = sym_image_alias,
  [sym_shell_command] = sym_shell_command,
  [sym_shell_fragment] = sym_shell_fragment,
  [sym_json_string_array] = sym_json_string_array,
  [sym_json_string] = sym_json_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym_array_element] = sym_array_element,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_instruction_repeat1] = aux_sym_run_instruction_repeat1,
  [aux_sym_run_instruction_repeat2] = aux_sym_run_instruction_repeat2,
  [aux_sym_label_instruction_repeat1] = aux_sym_label_instruction_repeat1,
  [aux_sym_expose_instruction_repeat1] = aux_sym_expose_instruction_repeat1,
  [aux_sym_env_instruction_repeat1] = aux_sym_env_instruction_repeat1,
  [aux_sym_add_instruction_repeat1] = aux_sym_add_instruction_repeat1,
  [aux_sym_add_instruction_repeat2] = aux_sym_add_instruction_repeat2,
  [aux_sym_volume_instruction_repeat1] = aux_sym_volume_instruction_repeat1,
  [aux_sym_user_name_or_group_repeat1] = aux_sym_user_name_or_group_repeat1,
  [aux_sym_stopsignal_value_repeat1] = aux_sym_stopsignal_value_repeat1,
  [aux_sym_heredoc_block_repeat1] = aux_sym_heredoc_block_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_image_name_repeat1] = aux_sym_image_name_repeat1,
  [aux_sym_image_tag_repeat1] = aux_sym_image_tag_repeat1,
  [aux_sym_image_digest_repeat1] = aux_sym_image_digest_repeat1,
  [aux_sym_mount_param_repeat1] = aux_sym_mount_param_repeat1,
  [aux_sym_image_alias_repeat1] = aux_sym_image_alias_repeat1,
  [aux_sym_shell_command_repeat1] = aux_sym_shell_command_repeat1,
  [aux_sym_shell_fragment_repeat1] = aux_sym_shell_fragment_repeat1,
  [aux_sym_json_string_array_repeat1] = aux_sym_json_string_array_repeat1,
  [aux_sym_json_string_repeat1] = aux_sym_json_string_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
  [alias_sym_imm_tok_at] = alias_sym_imm_tok_at,
  [alias_sym_imm_tok_bslashspace] = alias_sym_imm_tok_bslashspace,
  [alias_sym_imm_tok_colon] = alias_sym_imm_tok_colon,
  [alias_sym_imm_tok_comma] = alias_sym_imm_tok_comma,
  [alias_sym_imm_tok_dollar] = alias_sym_imm_tok_dollar,
  [alias_sym_imm_tok_eq] = alias_sym_imm_tok_eq,
  [alias_sym_imm_tok_lcurl] = alias_sym_imm_tok_lcurl,
  [alias_sym_imm_tok_mount] = alias_sym_imm_tok_mount,
  [alias_sym_imm_tok_pat_0ab9261] = alias_sym_imm_tok_pat_0ab9261,
  [alias_sym_imm_tok_pat_0c7fc22] = alias_sym_imm_tok_pat_0c7fc22,
  [alias_sym_imm_tok_pat_2b37705] = alias_sym_imm_tok_pat_2b37705,
  [alias_sym_imm_tok_pat_3a2a380] = alias_sym_imm_tok_pat_3a2a380,
  [alias_sym_imm_tok_pat_3d340f6] = alias_sym_imm_tok_pat_3d340f6,
  [alias_sym_imm_tok_pat_441cd81] = alias_sym_imm_tok_pat_441cd81,
  [alias_sym_imm_tok_pat_589b0f8] = alias_sym_imm_tok_pat_589b0f8,
  [alias_sym_imm_tok_pat_7642c4f] = alias_sym_imm_tok_pat_7642c4f,
  [alias_sym_imm_tok_pat_8713919] = alias_sym_imm_tok_pat_8713919,
  [alias_sym_imm_tok_pat_9a14b5c] = alias_sym_imm_tok_pat_9a14b5c,
  [alias_sym_imm_tok_pat_9f6bbb9] = alias_sym_imm_tok_pat_9f6bbb9,
  [alias_sym_imm_tok_pat_bcfc287] = alias_sym_imm_tok_pat_bcfc287,
  [alias_sym_imm_tok_pat_d2727a0] = alias_sym_imm_tok_pat_d2727a0,
  [alias_sym_imm_tok_pat_f43f746] = alias_sym_imm_tok_pat_f43f746,
  [alias_sym_imm_tok_pat_f46f69d] = alias_sym_imm_tok_pat_f46f69d,
  [alias_sym_imm_tok_pat_f6e1de8] = alias_sym_imm_tok_pat_f6e1de8,
  [alias_sym_imm_tok_rcurl] = alias_sym_imm_tok_rcurl,
  [alias_sym_pat_05444c2] = alias_sym_pat_05444c2,
  [alias_sym_pat_0851d06] = alias_sym_pat_0851d06,
  [alias_sym_pat_2b6adbc] = alias_sym_pat_2b6adbc,
  [alias_sym_pat_4128122] = alias_sym_pat_4128122,
  [alias_sym_pat_441cd81] = alias_sym_pat_441cd81,
  [alias_sym_pat_4a2f38a] = alias_sym_pat_4a2f38a,
  [alias_sym_pat_4de4cb9] = alias_sym_pat_4de4cb9,
  [alias_sym_pat_4fd4a56] = alias_sym_pat_4fd4a56,
  [alias_sym_pat_8165e5f] = alias_sym_pat_8165e5f,
  [alias_sym_pat_9873c86] = alias_sym_pat_9873c86,
  [alias_sym_pat_9a14b5c] = alias_sym_pat_9a14b5c,
  [alias_sym_pat_a667757] = alias_sym_pat_a667757,
  [alias_sym_pat_add] = alias_sym_pat_add,
  [alias_sym_pat_arg] = alias_sym_pat_arg,
  [alias_sym_pat_as] = alias_sym_pat_as,
  [alias_sym_pat_b1120d3] = alias_sym_pat_b1120d3,
  [alias_sym_pat_cmd] = alias_sym_pat_cmd,
  [alias_sym_pat_copy] = alias_sym_pat_copy,
  [alias_sym_pat_e0f3805] = alias_sym_pat_e0f3805,
  [alias_sym_pat_ea34a52] = alias_sym_pat_ea34a52,
  [alias_sym_pat_eda9032] = alias_sym_pat_eda9032,
  [alias_sym_pat_entr] = alias_sym_pat_entr,
  [alias_sym_pat_env] = alias_sym_pat_env,
  [alias_sym_pat_expose] = alias_sym_pat_expose,
  [alias_sym_pat_f8ab07f] = alias_sym_pat_f8ab07f,
  [alias_sym_pat_from] = alias_sym_pat_from,
  [alias_sym_pat_heal] = alias_sym_pat_heal,
  [alias_sym_pat_label] = alias_sym_pat_label,
  [alias_sym_pat_main] = alias_sym_pat_main,
  [alias_sym_pat_onbu] = alias_sym_pat_onbu,
  [alias_sym_pat_run] = alias_sym_pat_run,
  [alias_sym_pat_shell] = alias_sym_pat_shell,
  [alias_sym_pat_stop] = alias_sym_pat_stop,
  [alias_sym_pat_user] = alias_sym_pat_user,
  [alias_sym_pat_volume] = alias_sym_pat_volume,
  [alias_sym_pat_work] = alias_sym_pat_work,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_copy_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_name_or_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immediate_user_name_or_group_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_onbuild_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_healthcheck_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shell_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_instruction_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cross_build_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_with_heredoc_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expansion_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_spaced_env_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_port_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASHtcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHudp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_image_digest_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_mount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mount_param_param_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_required_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_json_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = false,
  },
  [sym_double_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_non_newline_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_metavariable] = {
    .visible = true,
    .named = true,
  },
  [sym_semgrep_ellipsis] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_end] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_from_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_run_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_label_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_env_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_add_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_volume_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_user_name_or_group_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_onbuild_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_stopsignal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_healthcheck_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_cross_build_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_path_with_heredoc] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_expansion_body] = {
    .visible = true,
    .named = true,
  },
  [sym_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_spaced_env_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_expose_port] = {
    .visible = true,
    .named = true,
  },
  [sym_label_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_image_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_image_name] = {
    .visible = true,
    .named = true,
  },
  [sym_image_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_image_digest] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param] = {
    .visible = true,
    .named = true,
  },
  [sym_mount_param_param] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [sym_shell_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_name_or_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stopsignal_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_digest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mount_param_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_image_alias_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shell_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_json_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_imm_tok_at] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_bslashspace] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_colon] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_comma] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_dollar] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_eq] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_lcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_mount] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0ab9261] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_0c7fc22] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_2b37705] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3a2a380] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_3d340f6] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_589b0f8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_7642c4f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_8713919] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_9f6bbb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_bcfc287] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_d2727a0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f43f746] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f46f69d] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_pat_f6e1de8] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_rcurl] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_05444c2] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_0851d06] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_2b6adbc] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4128122] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_441cd81] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4a2f38a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4de4cb9] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_4fd4a56] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8165e5f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9873c86] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_9a14b5c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_a667757] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_add] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_arg] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_as] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_b1120d3] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_cmd] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_copy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_e0f3805] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_ea34a52] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_eda9032] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_entr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_env] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_expose] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_f8ab07f] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_from] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_heal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_main] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_onbu] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_run] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_shell] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_stop] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_user] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_volume] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_work] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_as = 1,
  field_default = 2,
  field_digest = 3,
  field_group = 4,
  field_key = 5,
  field_name = 6,
  field_tag = 7,
  field_user = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_as] = "as",
  [field_default] = "default",
  [field_digest] = "digest",
  [field_group] = "group",
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_user] = "user",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [20] = {.index = 1, .length = 1},
  [22] = {.index = 2, .length = 1},
  [23] = {.index = 2, .length = 1},
  [32] = {.index = 3, .length = 2},
  [33] = {.index = 5, .length = 2},
  [37] = {.index = 0, .length = 1},
  [45] = {.index = 7, .length = 1},
  [50] = {.index = 8, .length = 3},
  [54] = {.index = 11, .length = 2},
  [55] = {.index = 11, .length = 2},
  [56] = {.index = 13, .length = 2},
  [57] = {.index = 13, .length = 2},
  [58] = {.index = 15, .length = 2},
  [59] = {.index = 17, .length = 2},
  [60] = {.index = 17, .length = 2},
  [62] = {.index = 19, .length = 2},
  [64] = {.index = 21, .length = 1},
  [65] = {.index = 19, .length = 2},
  [66] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_user, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_tag, 1},
  [5] =
    {field_digest, 1},
    {field_name, 0},
  [7] =
    {field_as, 3},
  [8] =
    {field_digest, 2},
    {field_name, 0},
    {field_tag, 1},
  [11] =
    {field_key, 0},
    {field_value, 2},
  [13] =
    {field_name, 0},
    {field_value, 2},
  [15] =
    {field_group, 3},
    {field_user, 1},
  [17] =
    {field_default, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_value, 3},
  [21] =
    {field_as, 4},
  [22] =
    {field_name, 1},
    {field_value, 3},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_8165e5f,
  },
  [2] = {
    [0] = alias_sym_pat_from,
  },
  [4] = {
    [0] = alias_sym_pat_a667757,
  },
  [5] = {
    [0] = alias_sym_pat_b1120d3,
  },
  [6] = {
    [0] = alias_sym_pat_f8ab07f,
  },
  [7] = {
    [0] = alias_sym_pat_eda9032,
  },
  [8] = {
    [0] = alias_sym_pat_run,
  },
  [9] = {
    [0] = alias_sym_pat_cmd,
  },
  [10] = {
    [0] = alias_sym_pat_label,
  },
  [11] = {
    [0] = alias_sym_pat_e0f3805,
  },
  [12] = {
    [0] = alias_sym_pat_expose,
  },
  [13] = {
    [0] = alias_sym_pat_2b6adbc,
  },
  [14] = {
    [0] = alias_sym_pat_env,
  },
  [15] = {
    [0] = alias_sym_pat_9873c86,
  },
  [16] = {
    [0] = alias_sym_pat_0851d06,
  },
  [17] = {
    [0] = alias_sym_pat_entr,
  },
  [18] = {
    [0] = alias_sym_pat_volume,
  },
  [19] = {
    [0] = alias_sym_pat_05444c2,
  },
  [20] = {
    [0] = alias_sym_pat_user,
  },
  [21] = {
    [0] = alias_sym_pat_work,
  },
  [22] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
  },
  [23] = {
    [0] = alias_sym_pat_arg,
  },
  [24] = {
    [0] = alias_sym_pat_onbu,
  },
  [25] = {
    [0] = alias_sym_pat_441cd81,
  },
  [26] = {
    [0] = alias_sym_pat_stop,
  },
  [27] = {
    [0] = alias_sym_pat_heal,
  },
  [28] = {
    [0] = alias_sym_pat_shell,
  },
  [29] = {
    [0] = alias_sym_pat_main,
    [1] = alias_sym_pat_4fd4a56,
  },
  [30] = {
    [0] = alias_sym_pat_4a2f38a,
    [1] = alias_sym_pat_4fd4a56,
  },
  [31] = {
    [0] = alias_sym_imm_tok_pat_2b37705,
  },
  [34] = {
    [1] = alias_sym_pat_ea34a52,
  },
  [35] = {
    [0] = alias_sym_imm_tok_pat_589b0f8,
  },
  [36] = {
    [0] = alias_sym_imm_tok_pat_0ab9261,
  },
  [37] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [38] = {
    [0] = alias_sym_imm_tok_pat_0c7fc22,
  },
  [39] = {
    [0] = alias_sym_pat_add,
  },
  [40] = {
    [0] = alias_sym_pat_copy,
  },
  [41] = {
    [0] = alias_sym_imm_tok_pat_7642c4f,
  },
  [42] = {
    [0] = alias_sym_imm_tok_pat_441cd81,
  },
  [43] = {
    [0] = alias_sym_imm_tok_dollar,
  },
  [44] = {
    [0] = alias_sym_pat_9a14b5c,
  },
  [45] = {
    [0] = alias_sym_pat_from,
    [2] = alias_sym_pat_as,
  },
  [46] = {
    [0] = alias_sym_imm_tok_pat_bcfc287,
  },
  [47] = {
    [0] = alias_sym_imm_tok_colon,
  },
  [48] = {
    [0] = alias_sym_imm_tok_pat_d2727a0,
  },
  [49] = {
    [0] = alias_sym_imm_tok_at,
  },
  [51] = {
    [0] = alias_sym_imm_tok_pat_3a2a380,
  },
  [52] = {
    [0] = alias_sym_imm_tok_pat_9f6bbb9,
  },
  [53] = {
    [0] = alias_sym_imm_tok_bslashspace,
  },
  [54] = {
    [0] = alias_sym_pat_4128122,
    [1] = alias_sym_imm_tok_eq,
  },
  [55] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [56] = {
    [1] = alias_sym_imm_tok_eq,
  },
  [57] = {
    [1] = alias_sym_imm_tok_pat_3d340f6,
  },
  [58] = {
    [0] = alias_sym_pat_user,
    [2] = alias_sym_imm_tok_colon,
  },
  [59] = {
    [0] = alias_sym_pat_arg,
    [1] = alias_sym_pat_4de4cb9,
    [2] = alias_sym_imm_tok_eq,
  },
  [60] = {
    [0] = alias_sym_pat_arg,
    [2] = alias_sym_imm_tok_eq,
  },
  [61] = {
    [0] = alias_sym_imm_tok_lcurl,
    [1] = alias_sym_imm_tok_pat_8713919,
    [2] = alias_sym_imm_tok_rcurl,
  },
  [62] = {
    [1] = alias_sym_imm_tok_pat_f43f746,
    [2] = alias_sym_imm_tok_eq,
    [3] = alias_sym_imm_tok_pat_f6e1de8,
  },
  [63] = {
    [0] = alias_sym_imm_tok_pat_9a14b5c,
  },
  [64] = {
    [0] = alias_sym_pat_from,
    [3] = alias_sym_pat_as,
  },
  [65] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [66] = {
    [1] = alias_sym_imm_tok_mount,
    [2] = alias_sym_imm_tok_eq,
  },
  [67] = {
    [0] = alias_sym_imm_tok_pat_f46f69d,
    [1] = alias_sym_imm_tok_eq,
    [2] = alias_sym_imm_tok_pat_f46f69d,
  },
  [68] = {
    [0] = alias_sym_imm_tok_comma,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(3);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') SKIP(21)
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(303);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(240);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != '=') ADVANCE(274);
      END_STATE();
    case 27:
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 28:
      if (lookahead == '\n') SKIP(45)
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '<') ADVANCE(168);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(209);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '\\') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(209);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == ',') ADVANCE(261);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '=') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(273);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(247);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(237);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(264);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(310);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 81:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 88:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 98:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 109:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 113:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 121:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 127:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 136:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 148:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      END_STATE();
    case 149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      END_STATE();
    case 150:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 153:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 157:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 158:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 159:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(309);
      END_STATE();
    case 168:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '-' &&
          lookahead != '<') ADVANCE(217);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(212);
      END_STATE();
    case 170:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '$') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '<') ADVANCE(237);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (lookahead != 0) ADVANCE(209);
      END_STATE();
    case 171:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(129);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      END_STATE();
    case 172:
      if (eof) ADVANCE(173);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '$') ADVANCE(167);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(145);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(92);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(129);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(172)
      END_STATE();
    case 173:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_from_instruction_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_from_instruction_token2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_run_instruction_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_cmd_instruction_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_label_instruction_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_expose_instruction_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_env_instruction_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_add_instruction_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_copy_instruction_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_entrypoint_instruction_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_volume_instruction_token1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_instruction_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_name_or_group_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_immediate_user_name_or_group_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_workdir_instruction_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_arg_instruction_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_onbuild_instruction_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_stopsignal_instruction_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_stopsignal_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_healthcheck_instruction_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_NONE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_shell_instruction_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_maintainer_instruction_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cross_build_instruction_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '$') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_with_heredoc_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(309);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_spaced_env_pair_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_expose_port_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASHtcp);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASHudp);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_image_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_image_name_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '@') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_image_tag_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '@') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_image_digest_token1);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == 'u') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_param_token1);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_param_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_mount);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '=') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_mount_param_param_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_image_alias_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_image_alias_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token2);
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead == '\n' ||
          lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(213);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_shell_fragment_token4);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_required_line_continuation);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(308);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_json_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_json_escape_sequence);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_double_quoted_escape_sequence);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_single_quoted_escape_sequence);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_non_newline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_semgrep_metavariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_semgrep_ellipsis);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<' &&
          lookahead != '\\') ADVANCE(273);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 47, .external_lex_state = 2},
  [7] = {.lex_state = 47, .external_lex_state = 2},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 48, .external_lex_state = 2},
  [14] = {.lex_state = 48, .external_lex_state = 2},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 47, .external_lex_state = 2},
  [19] = {.lex_state = 34, .external_lex_state = 2},
  [20] = {.lex_state = 34, .external_lex_state = 2},
  [21] = {.lex_state = 46, .external_lex_state = 2},
  [22] = {.lex_state = 34, .external_lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 34, .external_lex_state = 2},
  [25] = {.lex_state = 46, .external_lex_state = 2},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 46, .external_lex_state = 2},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 46, .external_lex_state = 2},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 19, .external_lex_state = 3},
  [36] = {.lex_state = 46, .external_lex_state = 2},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 19, .external_lex_state = 3},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 19, .external_lex_state = 3},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 6, .external_lex_state = 4},
  [51] = {.lex_state = 6, .external_lex_state = 4},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 6, .external_lex_state = 4},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 25},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 47, .external_lex_state = 2},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 6, .external_lex_state = 4},
  [63] = {.lex_state = 25},
  [64] = {.lex_state = 19, .external_lex_state = 3},
  [65] = {.lex_state = 6, .external_lex_state = 4},
  [66] = {.lex_state = 19, .external_lex_state = 3},
  [67] = {.lex_state = 6, .external_lex_state = 4},
  [68] = {.lex_state = 19, .external_lex_state = 3},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 6, .external_lex_state = 4},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 19, .external_lex_state = 3},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 34, .external_lex_state = 2},
  [76] = {.lex_state = 34, .external_lex_state = 2},
  [77] = {.lex_state = 19, .external_lex_state = 2},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 34, .external_lex_state = 2},
  [87] = {.lex_state = 34, .external_lex_state = 2},
  [88] = {.lex_state = 34, .external_lex_state = 2},
  [89] = {.lex_state = 19, .external_lex_state = 2},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 34, .external_lex_state = 2},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 171},
  [98] = {.lex_state = 19, .external_lex_state = 2},
  [99] = {.lex_state = 19, .external_lex_state = 2},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 49, .external_lex_state = 2},
  [102] = {.lex_state = 19, .external_lex_state = 2},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 49, .external_lex_state = 2},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 171},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 171},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 55},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 18},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 55},
  [136] = {.lex_state = 55},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 55},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 55},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 15},
  [157] = {.lex_state = 5, .external_lex_state = 4},
  [158] = {.lex_state = 27},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 27},
  [161] = {.lex_state = 38},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 6, .external_lex_state = 4},
  [164] = {.lex_state = 28},
  [165] = {.lex_state = 28},
  [166] = {.lex_state = 6, .external_lex_state = 4},
  [167] = {.lex_state = 34, .external_lex_state = 2},
  [168] = {.lex_state = 25},
  [169] = {.lex_state = 28},
  [170] = {.lex_state = 28},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 57},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 27},
  [175] = {.lex_state = 6, .external_lex_state = 4},
  [176] = {.lex_state = 56},
  [177] = {.lex_state = 27},
  [178] = {.lex_state = 171},
  [179] = {.lex_state = 25},
  [180] = {.lex_state = 5, .external_lex_state = 4},
  [181] = {.lex_state = 6, .external_lex_state = 4},
  [182] = {.lex_state = 25},
  [183] = {.lex_state = 6, .external_lex_state = 4},
  [184] = {.lex_state = 28},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 6, .external_lex_state = 4},
  [187] = {.lex_state = 28},
  [188] = {.lex_state = 5, .external_lex_state = 4},
  [189] = {.lex_state = 5, .external_lex_state = 4},
  [190] = {.lex_state = 171},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 7, .external_lex_state = 4},
  [194] = {.lex_state = 41},
  [195] = {.lex_state = 13},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 34, .external_lex_state = 2},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 171},
  [201] = {.lex_state = 7, .external_lex_state = 4},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 7, .external_lex_state = 4},
  [204] = {.lex_state = 12},
  [205] = {.lex_state = 22},
  [206] = {.lex_state = 7, .external_lex_state = 4},
  [207] = {.lex_state = 19, .external_lex_state = 4},
  [208] = {.lex_state = 7, .external_lex_state = 4},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 28},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 19, .external_lex_state = 4},
  [215] = {.lex_state = 7, .external_lex_state = 4},
  [216] = {.lex_state = 19, .external_lex_state = 4},
  [217] = {.lex_state = 22},
  [218] = {.lex_state = 7, .external_lex_state = 4},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 22},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 33},
  [224] = {.lex_state = 16},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 33},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 41},
  [230] = {.lex_state = 12},
  [231] = {.lex_state = 7, .external_lex_state = 4},
  [232] = {.lex_state = 7, .external_lex_state = 4},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 22},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 40},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 43},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 24},
  [246] = {.lex_state = 19},
  [247] = {.lex_state = 51},
  [248] = {.lex_state = 5, .external_lex_state = 4},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 51},
  [251] = {.lex_state = 51},
  [252] = {.lex_state = 171, .external_lex_state = 5},
  [253] = {.lex_state = 15},
  [254] = {.lex_state = 15},
  [255] = {.lex_state = 171},
  [256] = {.lex_state = 18},
  [257] = {.lex_state = 51},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 51},
  [261] = {.lex_state = 51},
  [262] = {.lex_state = 19},
  [263] = {.lex_state = 51},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 51},
  [267] = {.lex_state = 51},
  [268] = {.lex_state = 51},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 15},
  [271] = {.lex_state = 51},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 51},
  [274] = {.lex_state = 51},
  [275] = {.lex_state = 51},
  [276] = {.lex_state = 51},
  [277] = {.lex_state = 19},
  [278] = {.lex_state = 19, .external_lex_state = 4},
  [279] = {.lex_state = 171, .external_lex_state = 5},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 51},
  [282] = {.lex_state = 171},
  [283] = {.lex_state = 14},
  [284] = {.lex_state = 33},
  [285] = {.lex_state = 14},
  [286] = {.lex_state = 51},
  [287] = {.lex_state = 14},
  [288] = {.lex_state = 55},
  [289] = {.lex_state = 55},
  [290] = {.lex_state = 55},
  [291] = {.lex_state = 18},
  [292] = {.lex_state = 18},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 55},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 51},
  [297] = {.lex_state = 51},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 18},
  [300] = {.lex_state = 51},
  [301] = {.lex_state = 55},
  [302] = {.lex_state = 24},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 24},
  [305] = {.lex_state = 55},
  [306] = {.lex_state = 51},
  [307] = {.lex_state = 51},
  [308] = {.lex_state = 171},
  [309] = {.lex_state = 171, .external_lex_state = 5},
  [310] = {.lex_state = 171},
  [311] = {.lex_state = 51},
  [312] = {.lex_state = 24},
  [313] = {.lex_state = 171},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 171},
  [318] = {.lex_state = 7, .external_lex_state = 4},
  [319] = {.lex_state = 44},
  [320] = {.lex_state = 171},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 16},
  [323] = {.lex_state = 58},
  [324] = {.lex_state = 171},
  [325] = {.lex_state = 7, .external_lex_state = 4},
  [326] = {.lex_state = 7, .external_lex_state = 4},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 171},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 57},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 171},
  [333] = {.lex_state = 7},
  [334] = {.lex_state = 171},
  [335] = {.lex_state = 50},
  [336] = {.lex_state = 7, .external_lex_state = 4},
  [337] = {.lex_state = 50},
  [338] = {.lex_state = 171, .external_lex_state = 5},
  [339] = {.lex_state = 7, .external_lex_state = 4},
  [340] = {.lex_state = 7, .external_lex_state = 4},
  [341] = {.lex_state = 40},
  [342] = {.lex_state = 58},
  [343] = {.lex_state = 7},
  [344] = {.lex_state = 7},
  [345] = {.lex_state = 52},
  [346] = {.lex_state = 52},
  [347] = {.lex_state = 7},
  [348] = {.lex_state = 7},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 7},
  [351] = {.lex_state = 171},
  [352] = {.lex_state = 171},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 7},
  [355] = {.lex_state = 7},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 59},
  [358] = {.lex_state = 267},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 267},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 54},
  [363] = {.lex_state = 171},
  [364] = {.lex_state = 171},
  [365] = {.lex_state = 7},
  [366] = {.lex_state = 171},
  [367] = {.lex_state = 171},
  [368] = {.lex_state = 60},
  [369] = {.lex_state = 171},
  [370] = {.lex_state = 171},
  [371] = {.lex_state = 171},
  [372] = {.lex_state = 7},
  [373] = {.lex_state = 206},
  [374] = {.lex_state = 206},
  [375] = {.lex_state = 171},
  [376] = {.lex_state = 171},
  [377] = {.lex_state = 60},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 171},
  [380] = {.lex_state = 171},
  [381] = {.lex_state = 60},
  [382] = {.lex_state = 60},
  [383] = {.lex_state = 7},
  [384] = {.lex_state = 171},
  [385] = {.lex_state = 7},
  [386] = {.lex_state = 7},
  [387] = {.lex_state = 171},
  [388] = {.lex_state = 7},
  [389] = {.lex_state = 171},
  [390] = {.lex_state = 171},
  [391] = {.lex_state = 171},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 171},
  [394] = {.lex_state = 7},
  [395] = {.lex_state = 7},
  [396] = {.lex_state = 171},
  [397] = {.lex_state = 7},
  [398] = {.lex_state = 171},
  [399] = {.lex_state = 7},
  [400] = {.lex_state = 171},
  [401] = {.lex_state = 171},
  [402] = {.lex_state = 171},
  [403] = {.lex_state = 7},
  [404] = {.lex_state = 171},
  [405] = {.lex_state = 58},
  [406] = {.lex_state = 171},
  [407] = {.lex_state = 171},
  [408] = {.lex_state = 59},
  [409] = {.lex_state = 171},
  [410] = {.lex_state = 59},
  [411] = {.lex_state = 171},
  [412] = {.lex_state = 59},
  [413] = {.lex_state = 171},
  [414] = {.lex_state = 59},
  [415] = {.lex_state = 59},
  [416] = {.lex_state = 59},
  [417] = {.lex_state = 59},
  [418] = {.lex_state = 59},
  [419] = {.lex_state = 59},
  [420] = {.lex_state = 59},
  [421] = {.lex_state = 59},
  [422] = {.lex_state = 59},
  [423] = {.lex_state = 59},
  [424] = {.lex_state = 59},
  [425] = {.lex_state = 54},
  [426] = {.lex_state = 54},
};

enum {
  ts_external_token_heredoc_marker = 0,
  ts_external_token_heredoc_line = 1,
  ts_external_token_heredoc_end = 2,
  ts_external_token_heredoc_nl = 3,
  ts_external_token_error_sentinel = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heredoc_marker] = sym_heredoc_marker,
  [ts_external_token_heredoc_line] = sym_heredoc_line,
  [ts_external_token_heredoc_end] = sym_heredoc_end,
  [ts_external_token_heredoc_nl] = sym_heredoc_nl,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
    [ts_external_token_heredoc_nl] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_heredoc_marker] = true,
  },
  [3] = {
    [ts_external_token_heredoc_marker] = true,
    [ts_external_token_heredoc_nl] = true,
  },
  [4] = {
    [ts_external_token_heredoc_nl] = true,
  },
  [5] = {
    [ts_external_token_heredoc_line] = true,
    [ts_external_token_heredoc_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_immediate_user_name_or_group_fragment_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [aux_sym_image_name_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_shell_fragment_token2] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [sym_heredoc_marker] = ACTIONS(1),
    [sym_heredoc_line] = ACTIONS(1),
    [sym_heredoc_end] = ACTIONS(1),
    [sym_heredoc_nl] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(366),
    [sym_instruction] = STATE(365),
    [sym_from_instruction] = STATE(372),
    [sym_run_instruction] = STATE(372),
    [sym_cmd_instruction] = STATE(372),
    [sym_label_instruction] = STATE(372),
    [sym_expose_instruction] = STATE(372),
    [sym_env_instruction] = STATE(372),
    [sym_add_instruction] = STATE(372),
    [sym_copy_instruction] = STATE(372),
    [sym_entrypoint_instruction] = STATE(372),
    [sym_volume_instruction] = STATE(372),
    [sym_user_instruction] = STATE(372),
    [sym_workdir_instruction] = STATE(372),
    [sym_arg_instruction] = STATE(372),
    [sym_onbuild_instruction] = STATE(372),
    [sym_stopsignal_instruction] = STATE(372),
    [sym_healthcheck_instruction] = STATE(372),
    [sym_shell_instruction] = STATE(372),
    [sym_maintainer_instruction] = STATE(372),
    [sym_cross_build_instruction] = STATE(372),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym_from_instruction_token1] = ACTIONS(9),
    [aux_sym_run_instruction_token1] = ACTIONS(11),
    [aux_sym_cmd_instruction_token1] = ACTIONS(13),
    [aux_sym_label_instruction_token1] = ACTIONS(15),
    [aux_sym_expose_instruction_token1] = ACTIONS(17),
    [aux_sym_env_instruction_token1] = ACTIONS(19),
    [aux_sym_add_instruction_token1] = ACTIONS(21),
    [aux_sym_copy_instruction_token1] = ACTIONS(23),
    [aux_sym_entrypoint_instruction_token1] = ACTIONS(25),
    [aux_sym_volume_instruction_token1] = ACTIONS(27),
    [aux_sym_user_instruction_token1] = ACTIONS(29),
    [aux_sym_workdir_instruction_token1] = ACTIONS(31),
    [aux_sym_arg_instruction_token1] = ACTIONS(33),
    [aux_sym_onbuild_instruction_token1] = ACTIONS(35),
    [aux_sym_stopsignal_instruction_token1] = ACTIONS(37),
    [aux_sym_healthcheck_instruction_token1] = ACTIONS(39),
    [aux_sym_shell_instruction_token1] = ACTIONS(41),
    [aux_sym_maintainer_instruction_token1] = ACTIONS(43),
    [aux_sym_cross_build_instruction_token1] = ACTIONS(45),
    [sym_line_continuation] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_semgrep_metavariable] = ACTIONS(47),
    [sym_semgrep_ellipsis] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(365), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(372), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [96] = 25,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(56), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(59), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(62), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(65), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(68), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(71), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(74), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(77), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(80), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(83), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(86), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(89), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(92), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(95), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(98), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(101), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(104), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(107), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(365), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(110), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(372), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [192] = 23,
    ACTIONS(9), 1,
      aux_sym_from_instruction_token1,
    ACTIONS(11), 1,
      aux_sym_run_instruction_token1,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(15), 1,
      aux_sym_label_instruction_token1,
    ACTIONS(17), 1,
      aux_sym_expose_instruction_token1,
    ACTIONS(19), 1,
      aux_sym_env_instruction_token1,
    ACTIONS(21), 1,
      aux_sym_add_instruction_token1,
    ACTIONS(23), 1,
      aux_sym_copy_instruction_token1,
    ACTIONS(25), 1,
      aux_sym_entrypoint_instruction_token1,
    ACTIONS(27), 1,
      aux_sym_volume_instruction_token1,
    ACTIONS(29), 1,
      aux_sym_user_instruction_token1,
    ACTIONS(31), 1,
      aux_sym_workdir_instruction_token1,
    ACTIONS(33), 1,
      aux_sym_arg_instruction_token1,
    ACTIONS(35), 1,
      aux_sym_onbuild_instruction_token1,
    ACTIONS(37), 1,
      aux_sym_stopsignal_instruction_token1,
    ACTIONS(39), 1,
      aux_sym_healthcheck_instruction_token1,
    ACTIONS(41), 1,
      aux_sym_shell_instruction_token1,
    ACTIONS(43), 1,
      aux_sym_maintainer_instruction_token1,
    ACTIONS(45), 1,
      aux_sym_cross_build_instruction_token1,
    STATE(347), 1,
      sym_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(47), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
    STATE(372), 19,
      sym_from_instruction,
      sym_run_instruction,
      sym_cmd_instruction,
      sym_label_instruction,
      sym_expose_instruction,
      sym_env_instruction,
      sym_add_instruction,
      sym_copy_instruction,
      sym_entrypoint_instruction,
      sym_volume_instruction,
      sym_user_instruction,
      sym_workdir_instruction,
      sym_arg_instruction,
      sym_onbuild_instruction,
      sym_stopsignal_instruction,
      sym_healthcheck_instruction,
      sym_shell_instruction,
      sym_maintainer_instruction,
      sym_cross_build_instruction,
  [282] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(51), 22,
      ts_builtin_sym_end,
      aux_sym_from_instruction_token1,
      aux_sym_run_instruction_token1,
      aux_sym_cmd_instruction_token1,
      aux_sym_label_instruction_token1,
      aux_sym_expose_instruction_token1,
      aux_sym_env_instruction_token1,
      aux_sym_add_instruction_token1,
      aux_sym_copy_instruction_token1,
      aux_sym_entrypoint_instruction_token1,
      aux_sym_volume_instruction_token1,
      aux_sym_user_instruction_token1,
      aux_sym_workdir_instruction_token1,
      aux_sym_arg_instruction_token1,
      aux_sym_onbuild_instruction_token1,
      aux_sym_stopsignal_instruction_token1,
      aux_sym_healthcheck_instruction_token1,
      aux_sym_shell_instruction_token1,
      aux_sym_maintainer_instruction_token1,
      aux_sym_cross_build_instruction_token1,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [311] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(214), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(193), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(7), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [355] = 13,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(115), 1,
      anon_sym_DASH_DASH,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_semgrep_ellipsis,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(214), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(215), 2,
      sym_shell_command,
      sym_json_string_array,
    STATE(18), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
  [399] = 11,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    STATE(152), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(133), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(38), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(272), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [438] = 8,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_DOLLAR2,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    STATE(30), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(147), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [469] = 8,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_DOLLAR2,
    ACTIONS(160), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(163), 1,
      anon_sym_BSLASH2,
    STATE(30), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(10), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    ACTIONS(158), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [500] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(205), 1,
      sym_imm_expansion,
    STATE(78), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(397), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [534] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(205), 1,
      sym_imm_expansion,
    STATE(78), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(395), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [568] = 11,
    ACTIONS(176), 1,
      aux_sym_path_token2,
    ACTIONS(178), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(180), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(182), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      sym_semgrep_ellipsis,
    ACTIONS(188), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(246), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(353), 2,
      sym_shell_command,
      sym_json_string_array,
  [604] = 11,
    ACTIONS(176), 1,
      aux_sym_path_token2,
    ACTIONS(178), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(180), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(182), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      sym_semgrep_ellipsis,
    ACTIONS(188), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(246), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(344), 2,
      sym_shell_command,
      sym_json_string_array,
  [640] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    STATE(30), 1,
      sym_imm_expansion,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(140), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [674] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(190), 1,
      anon_sym_DOLLAR2,
    STATE(30), 1,
      sym_imm_expansion,
    STATE(9), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(132), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [708] = 10,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(205), 1,
      sym_imm_expansion,
    STATE(78), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
    STATE(392), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_unquoted_string,
  [742] = 5,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(197), 2,
      sym_heredoc_marker,
      anon_sym_LBRACK,
    STATE(18), 3,
      sym_param,
      sym_mount_param,
      aux_sym_run_instruction_repeat1,
    ACTIONS(192), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [766] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(91), 1,
      aux_sym_add_instruction_repeat2,
    STATE(150), 1,
      sym_expansion,
    STATE(345), 1,
      sym_path_with_heredoc,
    STATE(88), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [801] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(75), 1,
      aux_sym_add_instruction_repeat2,
    STATE(150), 1,
      sym_expansion,
    STATE(345), 1,
      sym_path_with_heredoc,
    STATE(24), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [836] = 5,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(211), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(209), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [859] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(86), 1,
      aux_sym_add_instruction_repeat2,
    STATE(150), 1,
      sym_expansion,
    STATE(345), 1,
      sym_path_with_heredoc,
    STATE(19), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [894] = 9,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(218), 1,
      aux_sym_label_pair_token1,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      sym_semgrep_metavariable,
    ACTIONS(230), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(351), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [925] = 11,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    ACTIONS(201), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(203), 1,
      anon_sym_DOLLAR,
    ACTIONS(205), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      sym_heredoc_marker,
    STATE(76), 1,
      aux_sym_add_instruction_repeat2,
    STATE(150), 1,
      sym_expansion,
    STATE(345), 1,
      sym_path_with_heredoc,
    STATE(88), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [960] = 5,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(235), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(233), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [983] = 9,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      aux_sym_label_pair_token1,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
    ACTIONS(247), 1,
      sym_semgrep_metavariable,
    ACTIONS(249), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(23), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(351), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1014] = 5,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(25), 1,
      aux_sym_mount_param_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(253), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(251), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1037] = 3,
    ACTIONS(255), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1055] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(261), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(259), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1073] = 3,
    ACTIONS(263), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(265), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1091] = 7,
    ACTIONS(269), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      aux_sym_image_name_token2,
    STATE(129), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(45), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(267), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1117] = 7,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      aux_sym_image_name_token2,
    ACTIONS(277), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(275), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1143] = 7,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      aux_sym_image_name_token2,
    ACTIONS(281), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(32), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(279), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1169] = 7,
    ACTIONS(285), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(287), 1,
      anon_sym_DOLLAR2,
    ACTIONS(290), 1,
      aux_sym_image_name_token2,
    STATE(129), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(283), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1195] = 9,
    ACTIONS(295), 1,
      aux_sym_path_token2,
    ACTIONS(298), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(301), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(304), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(307), 1,
      sym_required_line_continuation,
    ACTIONS(309), 1,
      sym_heredoc_marker,
    STATE(35), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(293), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1225] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(314), 4,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(312), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1243] = 8,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_DOLLAR2,
    ACTIONS(319), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(322), 1,
      anon_sym_BSLASH2,
    STATE(152), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(158), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(37), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1271] = 8,
    ACTIONS(131), 1,
      anon_sym_DOLLAR2,
    ACTIONS(139), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(141), 1,
      anon_sym_BSLASH2,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(147), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
    STATE(37), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [1299] = 3,
    ACTIONS(325), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(327), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1317] = 3,
    ACTIONS(329), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(331), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1335] = 3,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1353] = 8,
    ACTIONS(241), 1,
      aux_sym_label_pair_token1,
    ACTIONS(249), 1,
      sym_semgrep_ellipsis,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(26), 2,
      sym_label_pair,
      aux_sym_label_instruction_repeat1,
    STATE(351), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1381] = 9,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(117), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(345), 1,
      sym_required_line_continuation,
    STATE(35), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(343), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [1411] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 8,
      anon_sym_DOLLAR2,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [1429] = 7,
    ACTIONS(271), 1,
      anon_sym_DOLLAR2,
    ACTIONS(273), 1,
      aux_sym_image_name_token2,
    ACTIONS(353), 1,
      aux_sym_from_instruction_token2,
    STATE(129), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(34), 2,
      sym_immediate_expansion,
      aux_sym_image_name_repeat1,
    ACTIONS(351), 3,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_AT,
  [1455] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_double_quoted_escape_sequence,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(61), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1482] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(365), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(367), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1499] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      sym_double_quoted_escape_sequence,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(54), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1526] = 7,
    ACTIONS(377), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(380), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(49), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [1551] = 7,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(389), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1576] = 7,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(391), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(393), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1601] = 8,
    ACTIONS(395), 1,
      anon_sym_DOLLAR2,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(403), 1,
      anon_sym_BSLASH,
    ACTIONS(406), 1,
      sym_double_quoted_escape_sequence,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1628] = 7,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 1,
      aux_sym_path_token3,
    ACTIONS(414), 1,
      anon_sym_DOLLAR2,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(417), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1653] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(419), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_BSLASH,
    ACTIONS(423), 1,
      sym_double_quoted_escape_sequence,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1680] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(421), 1,
      anon_sym_BSLASH,
    ACTIONS(423), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1707] = 9,
    ACTIONS(293), 1,
      anon_sym_LF,
    ACTIONS(307), 1,
      sym_required_line_continuation,
    ACTIONS(427), 1,
      aux_sym_path_token2,
    ACTIONS(430), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(433), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(436), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(439), 1,
      sym_heredoc_marker,
    STATE(56), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1736] = 9,
    ACTIONS(176), 1,
      aux_sym_path_token2,
    ACTIONS(180), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(182), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(188), 1,
      sym_heredoc_marker,
    ACTIONS(343), 1,
      anon_sym_LF,
    ACTIONS(345), 1,
      sym_required_line_continuation,
    ACTIONS(442), 1,
      aux_sym_shell_fragment_token2,
    STATE(56), 1,
      aux_sym_shell_fragment_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [1765] = 7,
    ACTIONS(446), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(448), 1,
      anon_sym_DOLLAR2,
    ACTIONS(451), 1,
      aux_sym_image_tag_token1,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(58), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1790] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      anon_sym_BSLASH,
    ACTIONS(458), 1,
      sym_double_quoted_escape_sequence,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(55), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1817] = 3,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(462), 3,
      sym_heredoc_marker,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
    ACTIONS(460), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_semgrep_ellipsis,
  [1834] = 8,
    ACTIONS(355), 1,
      anon_sym_DOLLAR2,
    ACTIONS(359), 1,
      aux_sym_double_quoted_string_token1,
    ACTIONS(421), 1,
      anon_sym_BSLASH,
    ACTIONS(423), 1,
      sym_double_quoted_escape_sequence,
    ACTIONS(464), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(52), 2,
      sym_immediate_expansion,
      aux_sym_double_quoted_string_repeat1,
  [1861] = 7,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(466), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(468), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(65), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1886] = 7,
    ACTIONS(472), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(474), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      aux_sym_image_tag_token1,
    STATE(182), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LF,
      anon_sym_AT,
    STATE(58), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [1911] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(478), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(480), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1928] = 7,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(482), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(484), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(53), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1953] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(488), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [1970] = 7,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(490), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(492), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(50), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [1995] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(494), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(496), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2012] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(49), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2037] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(49), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2062] = 7,
    ACTIONS(385), 1,
      aux_sym_path_token3,
    ACTIONS(387), 1,
      anon_sym_DOLLAR2,
    ACTIONS(506), 1,
      anon_sym_LF,
    STATE(186), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
    STATE(51), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2087] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(510), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(70), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2112] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(512), 3,
      sym_heredoc_marker,
      sym_heredoc_nl,
      anon_sym_LF,
    ACTIONS(514), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2129] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_LF,
      anon_sym_COLON,
    STATE(69), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2154] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_path_token1,
    ACTIONS(520), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(524), 1,
      sym_heredoc_marker,
    STATE(71), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(180), 1,
      sym_path_with_heredoc,
  [2182] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_path_token1,
    ACTIONS(520), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(524), 1,
      sym_heredoc_marker,
    STATE(71), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(188), 1,
      sym_path_with_heredoc,
  [2210] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(365), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(367), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2226] = 7,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_DOLLAR2,
    ACTIONS(172), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(174), 1,
      anon_sym_BSLASH2,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2250] = 7,
    ACTIONS(526), 1,
      anon_sym_LF,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(532), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(84), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2274] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    STATE(394), 1,
      sym_immediate_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(96), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2298] = 7,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(534), 1,
      anon_sym_LF,
    ACTIONS(536), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(85), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2322] = 7,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(538), 1,
      anon_sym_LF,
    ACTIONS(540), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2346] = 7,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(542), 1,
      anon_sym_DOLLAR2,
    ACTIONS(545), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(548), 1,
      anon_sym_BSLASH2,
    STATE(205), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(83), 2,
      sym_immediate_expansion,
      aux_sym_unquoted_string_repeat1,
  [2370] = 7,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2394] = 7,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2418] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_path_token1,
    ACTIONS(520), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(524), 1,
      sym_heredoc_marker,
    STATE(71), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(157), 1,
      sym_path_with_heredoc,
  [2446] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym_path_token1,
    ACTIONS(562), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(565), 1,
      anon_sym_DOLLAR,
    ACTIONS(568), 1,
      sym_heredoc_marker,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(150), 1,
      sym_expansion,
    STATE(345), 1,
      sym_path_with_heredoc,
  [2474] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(571), 1,
      aux_sym_path_token1,
    ACTIONS(575), 1,
      anon_sym_DASH_DASH,
    STATE(88), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
    ACTIONS(573), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [2496] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(478), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(480), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2512] = 7,
    ACTIONS(528), 1,
      aux_sym_path_token3,
    ACTIONS(530), 1,
      anon_sym_DOLLAR2,
    ACTIONS(578), 1,
      anon_sym_LF,
    ACTIONS(580), 1,
      sym_non_newline_whitespace,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(82), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2536] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym_path_token1,
    ACTIONS(520), 1,
      aux_sym_path_with_heredoc_token1,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(524), 1,
      sym_heredoc_marker,
    STATE(71), 1,
      sym_expansion,
    STATE(87), 1,
      aux_sym_add_instruction_repeat2,
    STATE(189), 1,
      sym_path_with_heredoc,
  [2564] = 7,
    ACTIONS(582), 1,
      anon_sym_LF,
    ACTIONS(584), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(586), 1,
      anon_sym_DOLLAR2,
    ACTIONS(588), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(93), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2588] = 7,
    ACTIONS(590), 1,
      anon_sym_LF,
    ACTIONS(592), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(594), 1,
      anon_sym_DOLLAR2,
    ACTIONS(597), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(93), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [2612] = 7,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(417), 1,
      sym_non_newline_whitespace,
    ACTIONS(600), 1,
      aux_sym_path_token3,
    ACTIONS(603), 1,
      anon_sym_DOLLAR2,
    STATE(211), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(94), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2636] = 6,
    ACTIONS(606), 1,
      anon_sym_LF,
    ACTIONS(608), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      aux_sym_expose_port_token1,
    ACTIONS(614), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(95), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2658] = 7,
    ACTIONS(500), 1,
      aux_sym_immediate_user_name_or_group_fragment_token1,
    ACTIONS(502), 1,
      anon_sym_DOLLAR2,
    ACTIONS(617), 1,
      anon_sym_LF,
    STATE(230), 1,
      sym_imm_expansion,
    STATE(243), 1,
      sym_immediate_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(49), 2,
      sym_immediate_user_name_or_group_fragment,
      aux_sym_user_name_or_group_repeat1,
  [2682] = 6,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(621), 1,
      anon_sym_DASH_DASH,
    STATE(356), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_NONE,
      sym_semgrep_metavariable,
    STATE(190), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [2704] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(512), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(514), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2720] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(494), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(496), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2736] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(623), 1,
      aux_sym_path_token1,
    ACTIONS(625), 1,
      aux_sym_path_token2,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_expansion,
    STATE(258), 1,
      sym_path,
    STATE(359), 1,
      sym_json_string_array,
  [2764] = 8,
    ACTIONS(113), 1,
      aux_sym_path_token2,
    ACTIONS(119), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(121), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(127), 1,
      sym_heredoc_marker,
    ACTIONS(629), 1,
      aux_sym_shell_fragment_token2,
    STATE(43), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(278), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2790] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(486), 2,
      sym_heredoc_marker,
      anon_sym_LF,
    ACTIONS(488), 5,
      aux_sym_path_token2,
      aux_sym_shell_fragment_token2,
      aux_sym_shell_fragment_token3,
      aux_sym_shell_fragment_token4,
      sym_required_line_continuation,
  [2806] = 9,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DOLLAR,
    ACTIONS(633), 1,
      aux_sym_image_name_token1,
    ACTIONS(635), 1,
      anon_sym_DASH_DASH,
    STATE(31), 1,
      sym_expansion,
    STATE(111), 1,
      sym_image_name,
    STATE(172), 1,
      sym_param,
    STATE(322), 1,
      sym_image_spec,
  [2834] = 6,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      anon_sym_DOLLAR,
    ACTIONS(641), 1,
      aux_sym_expose_port_token1,
    ACTIONS(643), 1,
      sym_semgrep_ellipsis,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(95), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [2856] = 8,
    ACTIONS(176), 1,
      aux_sym_path_token2,
    ACTIONS(178), 1,
      aux_sym_shell_fragment_token2,
    ACTIONS(180), 1,
      aux_sym_shell_fragment_token3,
    ACTIONS(182), 1,
      aux_sym_shell_fragment_token4,
    ACTIONS(188), 1,
      sym_heredoc_marker,
    STATE(57), 1,
      aux_sym_shell_fragment_repeat1,
    STATE(315), 1,
      sym_shell_fragment,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [2882] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(327), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [2897] = 6,
    ACTIONS(492), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(136), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [2918] = 6,
    ACTIONS(649), 1,
      aux_sym_env_key_token1,
    ACTIONS(651), 1,
      sym_semgrep_ellipsis,
    STATE(335), 1,
      sym_env_key,
    STATE(348), 1,
      sym_spaced_env_pair,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(141), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [2939] = 6,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
    STATE(313), 1,
      sym_array_element,
    STATE(317), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(657), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [2960] = 6,
    ACTIONS(659), 1,
      anon_sym_LF,
    ACTIONS(661), 1,
      anon_sym_DOLLAR2,
    ACTIONS(664), 1,
      aux_sym_image_alias_token2,
    STATE(254), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [2981] = 7,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(673), 1,
      anon_sym_AT,
    STATE(235), 1,
      sym_image_tag,
    STATE(316), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3004] = 6,
    ACTIONS(536), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(128), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3025] = 6,
    ACTIONS(532), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(134), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3046] = 6,
    ACTIONS(580), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(137), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3067] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3082] = 6,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      sym_array_element,
    STATE(317), 1,
      sym_json_string,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(657), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3103] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(335), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3118] = 6,
    ACTIONS(681), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      anon_sym_DOLLAR2,
    ACTIONS(685), 1,
      aux_sym_image_alias_token2,
    STATE(254), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3139] = 6,
    ACTIONS(683), 1,
      anon_sym_DOLLAR2,
    ACTIONS(685), 1,
      aux_sym_image_alias_token2,
    ACTIONS(687), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(110), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3160] = 3,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(691), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3175] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(347), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3190] = 6,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(698), 1,
      anon_sym_DOLLAR2,
    STATE(285), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(122), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3211] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(703), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3226] = 3,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(707), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3241] = 4,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_SLASHtcp,
      anon_sym_SLASHudp,
    ACTIONS(711), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [3258] = 5,
    ACTIONS(715), 1,
      anon_sym_DOLLAR,
    ACTIONS(717), 1,
      aux_sym_expose_port_token1,
    ACTIONS(719), 1,
      sym_semgrep_ellipsis,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(104), 3,
      sym_expansion,
      sym_expose_port,
      aux_sym_expose_instruction_repeat1,
  [3277] = 6,
    ACTIONS(417), 1,
      sym_non_newline_whitespace,
    ACTIONS(721), 1,
      aux_sym_path_token3,
    ACTIONS(724), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(127), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3298] = 6,
    ACTIONS(557), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3319] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(265), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(263), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3334] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(729), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(727), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3349] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(733), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(731), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3364] = 3,
    ACTIONS(735), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(737), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3379] = 6,
    ACTIONS(739), 1,
      anon_sym_LF,
    ACTIONS(741), 1,
      aux_sym_env_key_token1,
    ACTIONS(744), 1,
      sym_semgrep_ellipsis,
    STATE(375), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(133), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3400] = 6,
    ACTIONS(553), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3421] = 6,
    ACTIONS(484), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(127), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3442] = 6,
    ACTIONS(389), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(127), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3463] = 6,
    ACTIONS(540), 1,
      anon_sym_LF,
    ACTIONS(675), 1,
      aux_sym_path_token3,
    ACTIONS(677), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3484] = 6,
    ACTIONS(393), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(127), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3505] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(335), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3520] = 3,
    ACTIONS(747), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(749), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3535] = 6,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(753), 1,
      aux_sym_env_key_token1,
    ACTIONS(755), 1,
      sym_semgrep_ellipsis,
    STATE(375), 1,
      sym_env_key,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(133), 2,
      sym_env_pair,
      aux_sym_env_instruction_repeat1,
  [3556] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(331), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3571] = 3,
    ACTIONS(757), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3586] = 3,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(763), 5,
      aux_sym_label_pair_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [3601] = 6,
    ACTIONS(468), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(135), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3622] = 6,
    ACTIONS(765), 1,
      anon_sym_LF,
    ACTIONS(767), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(769), 1,
      anon_sym_DOLLAR2,
    STATE(285), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(122), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3643] = 6,
    ACTIONS(767), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(769), 1,
      anon_sym_DOLLAR2,
    ACTIONS(771), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(122), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3664] = 6,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(773), 1,
      aux_sym_path_token3,
    ACTIONS(776), 1,
      anon_sym_DOLLAR2,
    STATE(304), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(148), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3685] = 6,
    ACTIONS(767), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(769), 1,
      anon_sym_DOLLAR2,
    ACTIONS(779), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(147), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3706] = 6,
    ACTIONS(508), 1,
      sym_non_newline_whitespace,
    ACTIONS(645), 1,
      aux_sym_path_token3,
    ACTIONS(647), 1,
      anon_sym_DOLLAR2,
    STATE(290), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(138), 2,
      sym_immediate_expansion,
      aux_sym_path_repeat1,
  [3727] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_name_token2,
    ACTIONS(255), 4,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [3742] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(265), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3757] = 6,
    ACTIONS(767), 1,
      aux_sym_stopsignal_value_token2,
    ACTIONS(769), 1,
      anon_sym_DOLLAR2,
    ACTIONS(781), 1,
      anon_sym_LF,
    STATE(285), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(146), 2,
      sym_immediate_expansion,
      aux_sym_stopsignal_value_repeat1,
  [3778] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 4,
      aux_sym_env_key_token1,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
      sym_semgrep_ellipsis,
  [3793] = 6,
    ACTIONS(683), 1,
      anon_sym_DOLLAR2,
    ACTIONS(685), 1,
      aux_sym_image_alias_token2,
    ACTIONS(783), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(119), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3814] = 6,
    ACTIONS(683), 1,
      anon_sym_DOLLAR2,
    ACTIONS(685), 1,
      aux_sym_image_alias_token2,
    ACTIONS(785), 1,
      anon_sym_LF,
    STATE(254), 1,
      sym_imm_expansion,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(118), 2,
      sym_immediate_expansion,
      aux_sym_image_alias_repeat1,
  [3835] = 5,
    ACTIONS(787), 1,
      anon_sym_LF,
    ACTIONS(789), 1,
      sym_non_newline_whitespace,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(201), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [3853] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(335), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3867] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_path_token1,
    ACTIONS(625), 1,
      aux_sym_path_token2,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    STATE(90), 1,
      sym_expansion,
    STATE(314), 1,
      sym_path,
  [3889] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(349), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [3903] = 5,
    ACTIONS(586), 1,
      anon_sym_DOLLAR2,
    ACTIONS(588), 1,
      aux_sym_image_digest_token1,
    STATE(241), 1,
      sym_imm_expansion,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(92), 2,
      sym_immediate_expansion,
      aux_sym_image_digest_repeat1,
  [3921] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(793), 1,
      aux_sym_path_token1,
    ACTIONS(795), 1,
      aux_sym_path_token2,
    ACTIONS(797), 1,
      anon_sym_DOLLAR,
    STATE(114), 1,
      sym_expansion,
    STATE(355), 1,
      sym_path,
  [3943] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(333), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [3957] = 6,
    ACTIONS(799), 1,
      anon_sym_BSLASH,
    ACTIONS(801), 1,
      anon_sym_SQUOTE,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(805), 1,
      sym_single_quoted_escape_sequence,
    STATE(191), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3977] = 6,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(807), 1,
      anon_sym_BSLASH,
    ACTIONS(809), 1,
      anon_sym_SQUOTE,
    ACTIONS(811), 1,
      sym_single_quoted_escape_sequence,
    STATE(164), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [3997] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(347), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_path_token1,
    ACTIONS(462), 4,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
      anon_sym_DASH_DASH,
  [4027] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(335), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4041] = 6,
    ACTIONS(799), 1,
      anon_sym_BSLASH,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(805), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4061] = 6,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(815), 1,
      anon_sym_BSLASH,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
    ACTIONS(819), 1,
      sym_single_quoted_escape_sequence,
    STATE(169), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4081] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(823), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(821), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4095] = 7,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_DOLLAR,
    ACTIONS(633), 1,
      aux_sym_image_name_token1,
    STATE(31), 1,
      sym_expansion,
    STATE(111), 1,
      sym_image_name,
    STATE(329), 1,
      sym_image_spec,
  [4117] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4131] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(265), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4145] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(827), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4159] = 6,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_DOLLAR2,
    ACTIONS(476), 1,
      aux_sym_image_tag_token1,
    STATE(182), 1,
      sym_imm_expansion,
    STATE(63), 2,
      sym_immediate_expansion,
      aux_sym_image_tag_repeat1,
  [4179] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(831), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4193] = 5,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      sym_json_string,
    STATE(334), 1,
      sym_array_element,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(657), 2,
      sym_semgrep_metavariable,
      sym_semgrep_ellipsis,
  [4211] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4225] = 5,
    ACTIONS(789), 1,
      sym_non_newline_whitespace,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(833), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(203), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4243] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(255), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4257] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(265), 2,
      aux_sym_from_instruction_token2,
      aux_sym_image_tag_token1,
    ACTIONS(263), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      anon_sym_AT,
  [4271] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(731), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4285] = 6,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(835), 1,
      anon_sym_BSLASH,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      sym_single_quoted_escape_sequence,
    STATE(187), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4305] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_double_quoted_escape_sequence,
    ACTIONS(257), 3,
      anon_sym_DQUOTE,
      aux_sym_double_quoted_string_token1,
      anon_sym_BSLASH,
  [4319] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(263), 3,
      sym_heredoc_nl,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4333] = 6,
    ACTIONS(799), 1,
      anon_sym_BSLASH,
    ACTIONS(803), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(805), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(841), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4353] = 5,
    ACTIONS(789), 1,
      sym_non_newline_whitespace,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(843), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(232), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4371] = 5,
    ACTIONS(789), 1,
      sym_non_newline_whitespace,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(845), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(231), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4389] = 5,
    ACTIONS(13), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(621), 1,
      anon_sym_DASH_DASH,
    STATE(378), 1,
      sym_cmd_instruction,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(200), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [4407] = 6,
    ACTIONS(847), 1,
      anon_sym_BSLASH,
    ACTIONS(850), 1,
      anon_sym_SQUOTE,
    ACTIONS(852), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(855), 1,
      sym_single_quoted_escape_sequence,
    STATE(191), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4427] = 3,
    ACTIONS(858), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(860), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4440] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(862), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(218), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4455] = 5,
    ACTIONS(864), 1,
      anon_sym_DOLLAR,
    ACTIONS(866), 1,
      aux_sym_image_alias_token1,
    STATE(156), 1,
      sym_expansion,
    STATE(383), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4472] = 3,
    ACTIONS(349), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4485] = 3,
    ACTIONS(868), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(870), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym_path_token1,
    ACTIONS(874), 3,
      sym_heredoc_marker,
      aux_sym_path_with_heredoc_token1,
      anon_sym_DOLLAR,
  [4513] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(335), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4526] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(733), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4539] = 4,
    ACTIONS(573), 1,
      aux_sym_cmd_instruction_token1,
    ACTIONS(876), 1,
      anon_sym_DASH_DASH,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    STATE(200), 2,
      sym_param,
      aux_sym_add_instruction_repeat1,
  [4554] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(879), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4569] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(881), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4580] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4595] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4606] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(265), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4619] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(885), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4634] = 4,
    ACTIONS(889), 1,
      sym_required_line_continuation,
    STATE(207), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(887), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4649] = 4,
    ACTIONS(892), 1,
      anon_sym_LF,
    ACTIONS(894), 1,
      sym_heredoc_nl,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4664] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_LF,
      aux_sym_path_token3,
    ACTIONS(827), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [4677] = 3,
    ACTIONS(899), 1,
      sym_single_quoted_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(897), 3,
      anon_sym_BSLASH,
      anon_sym_SQUOTE,
      aux_sym_single_quoted_string_token1,
  [4690] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(265), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4703] = 3,
    ACTIONS(335), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [4716] = 5,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    ACTIONS(903), 1,
      aux_sym_json_string_token1,
    ACTIONS(905), 1,
      sym_json_escape_sequence,
    STATE(223), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4733] = 4,
    ACTIONS(909), 1,
      sym_required_line_continuation,
    STATE(216), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(907), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4748] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(206), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4763] = 4,
    ACTIONS(909), 1,
      sym_required_line_continuation,
    STATE(207), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(913), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [4778] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(257), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4791] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(911), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4806] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(257), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4819] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
    ACTIONS(349), 2,
      anon_sym_LF,
      aux_sym_path_token3,
  [4832] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(335), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [4845] = 3,
    ACTIONS(347), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4858] = 5,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(917), 1,
      aux_sym_json_string_token1,
    ACTIONS(920), 1,
      sym_json_escape_sequence,
    STATE(223), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4875] = 3,
    ACTIONS(731), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(733), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4888] = 3,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_DOLLAR,
      aux_sym_expose_port_token1,
      sym_semgrep_ellipsis,
  [4901] = 5,
    ACTIONS(903), 1,
      aux_sym_json_string_token1,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    ACTIONS(925), 1,
      sym_json_escape_sequence,
    STATE(213), 1,
      aux_sym_json_string_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [4918] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4929] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4940] = 5,
    ACTIONS(864), 1,
      anon_sym_DOLLAR,
    ACTIONS(866), 1,
      aux_sym_image_alias_token1,
    STATE(156), 1,
      sym_expansion,
    STATE(399), 1,
      sym_image_alias,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [4957] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [4968] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(927), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4983] = 4,
    ACTIONS(791), 1,
      sym_heredoc_nl,
    ACTIONS(929), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    STATE(208), 2,
      sym_heredoc_block,
      aux_sym_run_instruction_repeat2,
  [4998] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [5009] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(349), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5022] = 5,
    ACTIONS(673), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      anon_sym_LF,
    ACTIONS(933), 1,
      aux_sym_from_instruction_token2,
    STATE(321), 1,
      sym_image_digest,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5039] = 3,
    ACTIONS(937), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(935), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5052] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(327), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5065] = 3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
    ACTIONS(331), 2,
      aux_sym_unquoted_string_token1,
      anon_sym_BSLASH2,
  [5078] = 5,
    ACTIONS(939), 1,
      aux_sym_stopsignal_value_token1,
    ACTIONS(941), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym_expansion,
    STATE(343), 1,
      sym_stopsignal_value,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5095] = 3,
    ACTIONS(257), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5108] = 3,
    ACTIONS(265), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_digest_token1,
  [5121] = 5,
    ACTIONS(943), 1,
      aux_sym_user_name_or_group_token1,
    ACTIONS(945), 1,
      anon_sym_DOLLAR,
    STATE(72), 1,
      sym_expansion,
    STATE(333), 1,
      sym_user_name_or_group,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5138] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(947), 4,
      anon_sym_LF,
      anon_sym_COLON,
      aux_sym_immediate_user_name_or_group_fragment_token1,
      anon_sym_DOLLAR2,
  [5149] = 3,
    ACTIONS(733), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5161] = 3,
    ACTIONS(825), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5173] = 4,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(949), 1,
      sym_required_line_continuation,
    STATE(262), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5187] = 4,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_variable,
    STATE(253), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5201] = 3,
    ACTIONS(506), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(508), 2,
      sym_heredoc_nl,
      sym_non_newline_whitespace,
  [5213] = 4,
    ACTIONS(955), 1,
      anon_sym_LF,
    ACTIONS(957), 1,
      sym_non_newline_whitespace,
    STATE(269), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5227] = 4,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      sym_variable,
    STATE(224), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5241] = 4,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
    ACTIONS(965), 1,
      sym_variable,
    STATE(181), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5255] = 4,
    ACTIONS(967), 1,
      sym_heredoc_line,
    ACTIONS(970), 1,
      sym_heredoc_end,
    STATE(252), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5269] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5279] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5289] = 4,
    ACTIONS(972), 1,
      anon_sym_COMMA2,
    ACTIONS(975), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5303] = 3,
    ACTIONS(977), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(979), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5315] = 4,
    ACTIONS(981), 1,
      anon_sym_LBRACE,
    ACTIONS(983), 1,
      sym_variable,
    STATE(185), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5329] = 4,
    ACTIONS(957), 1,
      sym_non_newline_whitespace,
    ACTIONS(985), 1,
      anon_sym_LF,
    STATE(249), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5343] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5353] = 4,
    ACTIONS(987), 1,
      anon_sym_LBRACE,
    ACTIONS(989), 1,
      sym_variable,
    STATE(217), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5367] = 4,
    ACTIONS(991), 1,
      anon_sym_LBRACE,
    ACTIONS(993), 1,
      sym_variable,
    STATE(154), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5381] = 4,
    ACTIONS(913), 1,
      anon_sym_LF,
    ACTIONS(949), 1,
      sym_required_line_continuation,
    STATE(277), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5395] = 4,
    ACTIONS(995), 1,
      anon_sym_LBRACE,
    ACTIONS(997), 1,
      sym_variable,
    STATE(28), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5409] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(999), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5419] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5429] = 4,
    ACTIONS(951), 1,
      anon_sym_LBRACE,
    ACTIONS(953), 1,
      sym_variable,
    STATE(270), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5443] = 4,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym_variable,
    STATE(240), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5457] = 4,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
    ACTIONS(965), 1,
      sym_variable,
    STATE(183), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5471] = 4,
    ACTIONS(1005), 1,
      anon_sym_LF,
    ACTIONS(1007), 1,
      sym_non_newline_whitespace,
    STATE(269), 1,
      aux_sym_volume_instruction_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5485] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 3,
      anon_sym_LF,
      anon_sym_DOLLAR2,
      aux_sym_image_alias_token2,
  [5495] = 4,
    ACTIONS(1010), 1,
      anon_sym_LBRACE,
    ACTIONS(1012), 1,
      sym_variable,
    STATE(179), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5509] = 3,
    ACTIONS(1014), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1016), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5521] = 4,
    ACTIONS(1018), 1,
      anon_sym_LBRACE,
    ACTIONS(1020), 1,
      sym_variable,
    STATE(287), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5535] = 4,
    ACTIONS(1018), 1,
      anon_sym_LBRACE,
    ACTIONS(1020), 1,
      sym_variable,
    STATE(283), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5549] = 4,
    ACTIONS(1022), 1,
      anon_sym_LBRACE,
    ACTIONS(1024), 1,
      sym_variable,
    STATE(244), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5563] = 4,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    ACTIONS(1028), 1,
      sym_variable,
    STATE(151), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5577] = 4,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(1030), 1,
      sym_required_line_continuation,
    STATE(277), 1,
      aux_sym_shell_command_repeat1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [5591] = 3,
    ACTIONS(1033), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(887), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [5603] = 4,
    ACTIONS(1035), 1,
      sym_heredoc_line,
    ACTIONS(1037), 1,
      sym_heredoc_end,
    STATE(252), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5617] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5627] = 4,
    ACTIONS(1022), 1,
      anon_sym_LBRACE,
    ACTIONS(1024), 1,
      sym_variable,
    STATE(302), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5641] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA2,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5655] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5665] = 3,
    ACTIONS(1045), 1,
      sym_json_escape_sequence,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1043), 2,
      anon_sym_DQUOTE,
      aux_sym_json_string_token1,
  [5677] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5687] = 4,
    ACTIONS(1047), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym_variable,
    STATE(228), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5701] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5711] = 3,
    ACTIONS(335), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5723] = 3,
    ACTIONS(733), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5735] = 3,
    ACTIONS(265), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5747] = 3,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(691), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5759] = 3,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(703), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5771] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5781] = 3,
    ACTIONS(257), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5793] = 3,
    ACTIONS(349), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5805] = 4,
    ACTIONS(1047), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym_variable,
    STATE(233), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5819] = 4,
    ACTIONS(1051), 1,
      anon_sym_LBRACE,
    ACTIONS(1053), 1,
      sym_variable,
    STATE(199), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5833] = 3,
    ACTIONS(757), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(759), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5845] = 3,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(763), 2,
      aux_sym_env_key_token1,
      sym_semgrep_ellipsis,
  [5857] = 4,
    ACTIONS(1051), 1,
      anon_sym_LBRACE,
    ACTIONS(1053), 1,
      sym_variable,
    STATE(219), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5871] = 3,
    ACTIONS(349), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5883] = 3,
    ACTIONS(257), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5895] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1055), 3,
      anon_sym_LF,
      aux_sym_stopsignal_value_token2,
      anon_sym_DOLLAR2,
  [5905] = 3,
    ACTIONS(265), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [5917] = 3,
    ACTIONS(825), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(827), 2,
      anon_sym_DOLLAR2,
      sym_non_newline_whitespace,
  [5929] = 4,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      sym_variable,
    STATE(289), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5943] = 4,
    ACTIONS(1057), 1,
      anon_sym_LBRACE,
    ACTIONS(1059), 1,
      sym_variable,
    STATE(294), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5957] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA2,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5971] = 4,
    ACTIONS(1035), 1,
      sym_heredoc_line,
    ACTIONS(1063), 1,
      sym_heredoc_end,
    STATE(279), 1,
      aux_sym_heredoc_block_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5985] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA2,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    STATE(282), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [5999] = 4,
    ACTIONS(1026), 1,
      anon_sym_LBRACE,
    ACTIONS(1028), 1,
      sym_variable,
    STATE(131), 1,
      sym_expansion_body,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6013] = 3,
    ACTIONS(335), 1,
      aux_sym_path_token3,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_LF,
      anon_sym_DOLLAR2,
  [6025] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA2,
    ACTIONS(1067), 1,
      anon_sym_RBRACK,
    STATE(308), 1,
      aux_sym_json_string_array_repeat1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6039] = 3,
    ACTIONS(1005), 1,
      anon_sym_LF,
    ACTIONS(1069), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6050] = 3,
    ACTIONS(887), 1,
      anon_sym_LF,
    ACTIONS(1033), 1,
      sym_required_line_continuation,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6061] = 3,
    ACTIONS(1071), 1,
      anon_sym_LF,
    ACTIONS(1073), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6072] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1075), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6081] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1077), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6090] = 3,
    ACTIONS(1079), 1,
      aux_sym_arg_instruction_token2,
    ACTIONS(1081), 1,
      sym_semgrep_metavariable,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6101] = 3,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(354), 1,
      sym_json_string_array,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6112] = 3,
    ACTIONS(1083), 1,
      anon_sym_LF,
    ACTIONS(1085), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6123] = 3,
    ACTIONS(1087), 1,
      anon_sym_LF,
    ACTIONS(1089), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym_mount_param_param_token1,
    STATE(27), 1,
      sym_mount_param_param,
  [6147] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1093), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6156] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1095), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6165] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1097), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6174] = 3,
    ACTIONS(1099), 1,
      anon_sym_LF,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6185] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(462), 2,
      aux_sym_cmd_instruction_token1,
      anon_sym_DASH_DASH,
  [6194] = 3,
    ACTIONS(1103), 1,
      anon_sym_LF,
    ACTIONS(1105), 1,
      aux_sym_from_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6205] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(460), 1,
      aux_sym_image_name_token1,
    ACTIONS(462), 1,
      anon_sym_DOLLAR,
  [6218] = 3,
    ACTIONS(1107), 1,
      anon_sym_LF,
    ACTIONS(1109), 1,
      anon_sym_EQ,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6229] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1111), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6238] = 3,
    ACTIONS(1113), 1,
      anon_sym_LF,
    ACTIONS(1115), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6249] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(975), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [6258] = 3,
    ACTIONS(1117), 1,
      anon_sym_EQ,
    ACTIONS(1119), 1,
      aux_sym_spaced_env_pair_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6269] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1121), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6278] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1123), 2,
      anon_sym_EQ,
      aux_sym_spaced_env_pair_token1,
  [6287] = 2,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(970), 2,
      sym_heredoc_line,
      sym_heredoc_end,
  [6296] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(1125), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6305] = 2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
    ACTIONS(907), 2,
      sym_heredoc_nl,
      anon_sym_LF,
  [6314] = 3,
    ACTIONS(1127), 1,
      aux_sym_param_token1,
    ACTIONS(1129), 1,
      anon_sym_mount,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6325] = 4,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1091), 1,
      aux_sym_mount_param_param_token1,
    STATE(29), 1,
      sym_mount_param_param,
  [6338] = 2,
    ACTIONS(1131), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6346] = 2,
    ACTIONS(1133), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6354] = 2,
    ACTIONS(789), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6362] = 2,
    ACTIONS(508), 1,
      sym_non_newline_whitespace,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6370] = 2,
    ACTIONS(1135), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6378] = 2,
    ACTIONS(751), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6386] = 2,
    ACTIONS(1137), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6394] = 2,
    ACTIONS(1139), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6402] = 2,
    ACTIONS(1141), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6410] = 2,
    ACTIONS(1143), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6418] = 2,
    ACTIONS(1145), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6426] = 2,
    ACTIONS(1147), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6434] = 2,
    ACTIONS(1149), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6442] = 2,
    ACTIONS(1151), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6450] = 2,
    ACTIONS(1153), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6458] = 2,
    ACTIONS(1155), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6466] = 2,
    ACTIONS(1157), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6474] = 2,
    ACTIONS(1159), 1,
      aux_sym_shell_fragment_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6482] = 2,
    ACTIONS(907), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6490] = 2,
    ACTIONS(1161), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6498] = 2,
    ACTIONS(1123), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6506] = 2,
    ACTIONS(1163), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6514] = 2,
    ACTIONS(1165), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6522] = 2,
    ACTIONS(1167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6530] = 2,
    ACTIONS(1169), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6538] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1171), 1,
      aux_sym_param_token2,
  [6548] = 2,
    ACTIONS(1173), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6556] = 2,
    ACTIONS(689), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6564] = 2,
    ACTIONS(701), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6572] = 2,
    ACTIONS(1175), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6580] = 2,
    ACTIONS(1177), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6588] = 2,
    ACTIONS(1179), 1,
      aux_sym_maintainer_instruction_token2,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6596] = 2,
    ACTIONS(1117), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6604] = 2,
    ACTIONS(1181), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6612] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1183), 1,
      aux_sym_param_token2,
  [6622] = 2,
    ACTIONS(1185), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6630] = 2,
    ACTIONS(1187), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6638] = 2,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6646] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1191), 1,
      aux_sym_param_token2,
  [6656] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1193), 1,
      aux_sym_param_token2,
  [6666] = 2,
    ACTIONS(1195), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6674] = 2,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6682] = 2,
    ACTIONS(1121), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6690] = 2,
    ACTIONS(1199), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6698] = 2,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6706] = 2,
    ACTIONS(1095), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6714] = 2,
    ACTIONS(757), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6722] = 2,
    ACTIONS(1203), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6730] = 2,
    ACTIONS(761), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6738] = 2,
    ACTIONS(1205), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6746] = 2,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6754] = 2,
    ACTIONS(1209), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6762] = 2,
    ACTIONS(1211), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6770] = 2,
    ACTIONS(1213), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6778] = 2,
    ACTIONS(1215), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6786] = 2,
    ACTIONS(1217), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6794] = 2,
    ACTIONS(1219), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6802] = 2,
    ACTIONS(1221), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6810] = 2,
    ACTIONS(1223), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6818] = 2,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6826] = 2,
    ACTIONS(1077), 1,
      anon_sym_LF,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6834] = 2,
    ACTIONS(1227), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6842] = 3,
    ACTIONS(3), 1,
      sym_line_continuation,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1229), 1,
      aux_sym_mount_param_param_token1,
  [6852] = 2,
    ACTIONS(1231), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6860] = 2,
    ACTIONS(1233), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6868] = 2,
    ACTIONS(1235), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6876] = 2,
    ACTIONS(1237), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6884] = 2,
    ACTIONS(1239), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6892] = 2,
    ACTIONS(1241), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6900] = 2,
    ACTIONS(1243), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6908] = 2,
    ACTIONS(1245), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [6916] = 2,
    ACTIONS(1247), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6924] = 2,
    ACTIONS(1249), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6932] = 2,
    ACTIONS(1251), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6940] = 2,
    ACTIONS(1253), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6948] = 2,
    ACTIONS(1255), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6956] = 2,
    ACTIONS(1257), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6964] = 2,
    ACTIONS(1259), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6972] = 2,
    ACTIONS(1261), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6980] = 2,
    ACTIONS(1263), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6988] = 2,
    ACTIONS(1265), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [6996] = 2,
    ACTIONS(1267), 1,
      aux_sym_expansion_body_token1,
    ACTIONS(5), 2,
      sym_line_continuation,
      sym_comment,
  [7004] = 2,
    ACTIONS(1269), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
  [7012] = 2,
    ACTIONS(1271), 1,
      aux_sym_param_token1,
    ACTIONS(3), 2,
      sym_line_continuation,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 96,
  [SMALL_STATE(4)] = 192,
  [SMALL_STATE(5)] = 282,
  [SMALL_STATE(6)] = 311,
  [SMALL_STATE(7)] = 355,
  [SMALL_STATE(8)] = 399,
  [SMALL_STATE(9)] = 438,
  [SMALL_STATE(10)] = 469,
  [SMALL_STATE(11)] = 500,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 568,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 640,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 766,
  [SMALL_STATE(20)] = 801,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 894,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 960,
  [SMALL_STATE(26)] = 983,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1037,
  [SMALL_STATE(29)] = 1055,
  [SMALL_STATE(30)] = 1073,
  [SMALL_STATE(31)] = 1091,
  [SMALL_STATE(32)] = 1117,
  [SMALL_STATE(33)] = 1143,
  [SMALL_STATE(34)] = 1169,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1225,
  [SMALL_STATE(37)] = 1243,
  [SMALL_STATE(38)] = 1271,
  [SMALL_STATE(39)] = 1299,
  [SMALL_STATE(40)] = 1317,
  [SMALL_STATE(41)] = 1335,
  [SMALL_STATE(42)] = 1353,
  [SMALL_STATE(43)] = 1381,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1429,
  [SMALL_STATE(46)] = 1455,
  [SMALL_STATE(47)] = 1482,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1526,
  [SMALL_STATE(50)] = 1551,
  [SMALL_STATE(51)] = 1576,
  [SMALL_STATE(52)] = 1601,
  [SMALL_STATE(53)] = 1628,
  [SMALL_STATE(54)] = 1653,
  [SMALL_STATE(55)] = 1680,
  [SMALL_STATE(56)] = 1707,
  [SMALL_STATE(57)] = 1736,
  [SMALL_STATE(58)] = 1765,
  [SMALL_STATE(59)] = 1790,
  [SMALL_STATE(60)] = 1817,
  [SMALL_STATE(61)] = 1834,
  [SMALL_STATE(62)] = 1861,
  [SMALL_STATE(63)] = 1886,
  [SMALL_STATE(64)] = 1911,
  [SMALL_STATE(65)] = 1928,
  [SMALL_STATE(66)] = 1953,
  [SMALL_STATE(67)] = 1970,
  [SMALL_STATE(68)] = 1995,
  [SMALL_STATE(69)] = 2012,
  [SMALL_STATE(70)] = 2037,
  [SMALL_STATE(71)] = 2062,
  [SMALL_STATE(72)] = 2087,
  [SMALL_STATE(73)] = 2112,
  [SMALL_STATE(74)] = 2129,
  [SMALL_STATE(75)] = 2154,
  [SMALL_STATE(76)] = 2182,
  [SMALL_STATE(77)] = 2210,
  [SMALL_STATE(78)] = 2226,
  [SMALL_STATE(79)] = 2250,
  [SMALL_STATE(80)] = 2274,
  [SMALL_STATE(81)] = 2298,
  [SMALL_STATE(82)] = 2322,
  [SMALL_STATE(83)] = 2346,
  [SMALL_STATE(84)] = 2370,
  [SMALL_STATE(85)] = 2394,
  [SMALL_STATE(86)] = 2418,
  [SMALL_STATE(87)] = 2446,
  [SMALL_STATE(88)] = 2474,
  [SMALL_STATE(89)] = 2496,
  [SMALL_STATE(90)] = 2512,
  [SMALL_STATE(91)] = 2536,
  [SMALL_STATE(92)] = 2564,
  [SMALL_STATE(93)] = 2588,
  [SMALL_STATE(94)] = 2612,
  [SMALL_STATE(95)] = 2636,
  [SMALL_STATE(96)] = 2658,
  [SMALL_STATE(97)] = 2682,
  [SMALL_STATE(98)] = 2704,
  [SMALL_STATE(99)] = 2720,
  [SMALL_STATE(100)] = 2736,
  [SMALL_STATE(101)] = 2764,
  [SMALL_STATE(102)] = 2790,
  [SMALL_STATE(103)] = 2806,
  [SMALL_STATE(104)] = 2834,
  [SMALL_STATE(105)] = 2856,
  [SMALL_STATE(106)] = 2882,
  [SMALL_STATE(107)] = 2897,
  [SMALL_STATE(108)] = 2918,
  [SMALL_STATE(109)] = 2939,
  [SMALL_STATE(110)] = 2960,
  [SMALL_STATE(111)] = 2981,
  [SMALL_STATE(112)] = 3004,
  [SMALL_STATE(113)] = 3025,
  [SMALL_STATE(114)] = 3046,
  [SMALL_STATE(115)] = 3067,
  [SMALL_STATE(116)] = 3082,
  [SMALL_STATE(117)] = 3103,
  [SMALL_STATE(118)] = 3118,
  [SMALL_STATE(119)] = 3139,
  [SMALL_STATE(120)] = 3160,
  [SMALL_STATE(121)] = 3175,
  [SMALL_STATE(122)] = 3190,
  [SMALL_STATE(123)] = 3211,
  [SMALL_STATE(124)] = 3226,
  [SMALL_STATE(125)] = 3241,
  [SMALL_STATE(126)] = 3258,
  [SMALL_STATE(127)] = 3277,
  [SMALL_STATE(128)] = 3298,
  [SMALL_STATE(129)] = 3319,
  [SMALL_STATE(130)] = 3334,
  [SMALL_STATE(131)] = 3349,
  [SMALL_STATE(132)] = 3364,
  [SMALL_STATE(133)] = 3379,
  [SMALL_STATE(134)] = 3400,
  [SMALL_STATE(135)] = 3421,
  [SMALL_STATE(136)] = 3442,
  [SMALL_STATE(137)] = 3463,
  [SMALL_STATE(138)] = 3484,
  [SMALL_STATE(139)] = 3505,
  [SMALL_STATE(140)] = 3520,
  [SMALL_STATE(141)] = 3535,
  [SMALL_STATE(142)] = 3556,
  [SMALL_STATE(143)] = 3571,
  [SMALL_STATE(144)] = 3586,
  [SMALL_STATE(145)] = 3601,
  [SMALL_STATE(146)] = 3622,
  [SMALL_STATE(147)] = 3643,
  [SMALL_STATE(148)] = 3664,
  [SMALL_STATE(149)] = 3685,
  [SMALL_STATE(150)] = 3706,
  [SMALL_STATE(151)] = 3727,
  [SMALL_STATE(152)] = 3742,
  [SMALL_STATE(153)] = 3757,
  [SMALL_STATE(154)] = 3778,
  [SMALL_STATE(155)] = 3793,
  [SMALL_STATE(156)] = 3814,
  [SMALL_STATE(157)] = 3835,
  [SMALL_STATE(158)] = 3853,
  [SMALL_STATE(159)] = 3867,
  [SMALL_STATE(160)] = 3889,
  [SMALL_STATE(161)] = 3903,
  [SMALL_STATE(162)] = 3921,
  [SMALL_STATE(163)] = 3943,
  [SMALL_STATE(164)] = 3957,
  [SMALL_STATE(165)] = 3977,
  [SMALL_STATE(166)] = 3997,
  [SMALL_STATE(167)] = 4011,
  [SMALL_STATE(168)] = 4027,
  [SMALL_STATE(169)] = 4041,
  [SMALL_STATE(170)] = 4061,
  [SMALL_STATE(171)] = 4081,
  [SMALL_STATE(172)] = 4095,
  [SMALL_STATE(173)] = 4117,
  [SMALL_STATE(174)] = 4131,
  [SMALL_STATE(175)] = 4145,
  [SMALL_STATE(176)] = 4159,
  [SMALL_STATE(177)] = 4179,
  [SMALL_STATE(178)] = 4193,
  [SMALL_STATE(179)] = 4211,
  [SMALL_STATE(180)] = 4225,
  [SMALL_STATE(181)] = 4243,
  [SMALL_STATE(182)] = 4257,
  [SMALL_STATE(183)] = 4271,
  [SMALL_STATE(184)] = 4285,
  [SMALL_STATE(185)] = 4305,
  [SMALL_STATE(186)] = 4319,
  [SMALL_STATE(187)] = 4333,
  [SMALL_STATE(188)] = 4353,
  [SMALL_STATE(189)] = 4371,
  [SMALL_STATE(190)] = 4389,
  [SMALL_STATE(191)] = 4407,
  [SMALL_STATE(192)] = 4427,
  [SMALL_STATE(193)] = 4440,
  [SMALL_STATE(194)] = 4455,
  [SMALL_STATE(195)] = 4472,
  [SMALL_STATE(196)] = 4485,
  [SMALL_STATE(197)] = 4498,
  [SMALL_STATE(198)] = 4513,
  [SMALL_STATE(199)] = 4526,
  [SMALL_STATE(200)] = 4539,
  [SMALL_STATE(201)] = 4554,
  [SMALL_STATE(202)] = 4569,
  [SMALL_STATE(203)] = 4580,
  [SMALL_STATE(204)] = 4595,
  [SMALL_STATE(205)] = 4606,
  [SMALL_STATE(206)] = 4619,
  [SMALL_STATE(207)] = 4634,
  [SMALL_STATE(208)] = 4649,
  [SMALL_STATE(209)] = 4664,
  [SMALL_STATE(210)] = 4677,
  [SMALL_STATE(211)] = 4690,
  [SMALL_STATE(212)] = 4703,
  [SMALL_STATE(213)] = 4716,
  [SMALL_STATE(214)] = 4733,
  [SMALL_STATE(215)] = 4748,
  [SMALL_STATE(216)] = 4763,
  [SMALL_STATE(217)] = 4778,
  [SMALL_STATE(218)] = 4791,
  [SMALL_STATE(219)] = 4806,
  [SMALL_STATE(220)] = 4819,
  [SMALL_STATE(221)] = 4832,
  [SMALL_STATE(222)] = 4845,
  [SMALL_STATE(223)] = 4858,
  [SMALL_STATE(224)] = 4875,
  [SMALL_STATE(225)] = 4888,
  [SMALL_STATE(226)] = 4901,
  [SMALL_STATE(227)] = 4918,
  [SMALL_STATE(228)] = 4929,
  [SMALL_STATE(229)] = 4940,
  [SMALL_STATE(230)] = 4957,
  [SMALL_STATE(231)] = 4968,
  [SMALL_STATE(232)] = 4983,
  [SMALL_STATE(233)] = 4998,
  [SMALL_STATE(234)] = 5009,
  [SMALL_STATE(235)] = 5022,
  [SMALL_STATE(236)] = 5039,
  [SMALL_STATE(237)] = 5052,
  [SMALL_STATE(238)] = 5065,
  [SMALL_STATE(239)] = 5078,
  [SMALL_STATE(240)] = 5095,
  [SMALL_STATE(241)] = 5108,
  [SMALL_STATE(242)] = 5121,
  [SMALL_STATE(243)] = 5138,
  [SMALL_STATE(244)] = 5149,
  [SMALL_STATE(245)] = 5161,
  [SMALL_STATE(246)] = 5173,
  [SMALL_STATE(247)] = 5187,
  [SMALL_STATE(248)] = 5201,
  [SMALL_STATE(249)] = 5213,
  [SMALL_STATE(250)] = 5227,
  [SMALL_STATE(251)] = 5241,
  [SMALL_STATE(252)] = 5255,
  [SMALL_STATE(253)] = 5269,
  [SMALL_STATE(254)] = 5279,
  [SMALL_STATE(255)] = 5289,
  [SMALL_STATE(256)] = 5303,
  [SMALL_STATE(257)] = 5315,
  [SMALL_STATE(258)] = 5329,
  [SMALL_STATE(259)] = 5343,
  [SMALL_STATE(260)] = 5353,
  [SMALL_STATE(261)] = 5367,
  [SMALL_STATE(262)] = 5381,
  [SMALL_STATE(263)] = 5395,
  [SMALL_STATE(264)] = 5409,
  [SMALL_STATE(265)] = 5419,
  [SMALL_STATE(266)] = 5429,
  [SMALL_STATE(267)] = 5443,
  [SMALL_STATE(268)] = 5457,
  [SMALL_STATE(269)] = 5471,
  [SMALL_STATE(270)] = 5485,
  [SMALL_STATE(271)] = 5495,
  [SMALL_STATE(272)] = 5509,
  [SMALL_STATE(273)] = 5521,
  [SMALL_STATE(274)] = 5535,
  [SMALL_STATE(275)] = 5549,
  [SMALL_STATE(276)] = 5563,
  [SMALL_STATE(277)] = 5577,
  [SMALL_STATE(278)] = 5591,
  [SMALL_STATE(279)] = 5603,
  [SMALL_STATE(280)] = 5617,
  [SMALL_STATE(281)] = 5627,
  [SMALL_STATE(282)] = 5641,
  [SMALL_STATE(283)] = 5655,
  [SMALL_STATE(284)] = 5665,
  [SMALL_STATE(285)] = 5677,
  [SMALL_STATE(286)] = 5687,
  [SMALL_STATE(287)] = 5701,
  [SMALL_STATE(288)] = 5711,
  [SMALL_STATE(289)] = 5723,
  [SMALL_STATE(290)] = 5735,
  [SMALL_STATE(291)] = 5747,
  [SMALL_STATE(292)] = 5759,
  [SMALL_STATE(293)] = 5771,
  [SMALL_STATE(294)] = 5781,
  [SMALL_STATE(295)] = 5793,
  [SMALL_STATE(296)] = 5805,
  [SMALL_STATE(297)] = 5819,
  [SMALL_STATE(298)] = 5833,
  [SMALL_STATE(299)] = 5845,
  [SMALL_STATE(300)] = 5857,
  [SMALL_STATE(301)] = 5871,
  [SMALL_STATE(302)] = 5883,
  [SMALL_STATE(303)] = 5895,
  [SMALL_STATE(304)] = 5905,
  [SMALL_STATE(305)] = 5917,
  [SMALL_STATE(306)] = 5929,
  [SMALL_STATE(307)] = 5943,
  [SMALL_STATE(308)] = 5957,
  [SMALL_STATE(309)] = 5971,
  [SMALL_STATE(310)] = 5985,
  [SMALL_STATE(311)] = 5999,
  [SMALL_STATE(312)] = 6013,
  [SMALL_STATE(313)] = 6025,
  [SMALL_STATE(314)] = 6039,
  [SMALL_STATE(315)] = 6050,
  [SMALL_STATE(316)] = 6061,
  [SMALL_STATE(317)] = 6072,
  [SMALL_STATE(318)] = 6081,
  [SMALL_STATE(319)] = 6090,
  [SMALL_STATE(320)] = 6101,
  [SMALL_STATE(321)] = 6112,
  [SMALL_STATE(322)] = 6123,
  [SMALL_STATE(323)] = 6134,
  [SMALL_STATE(324)] = 6147,
  [SMALL_STATE(325)] = 6156,
  [SMALL_STATE(326)] = 6165,
  [SMALL_STATE(327)] = 6174,
  [SMALL_STATE(328)] = 6185,
  [SMALL_STATE(329)] = 6194,
  [SMALL_STATE(330)] = 6205,
  [SMALL_STATE(331)] = 6218,
  [SMALL_STATE(332)] = 6229,
  [SMALL_STATE(333)] = 6238,
  [SMALL_STATE(334)] = 6249,
  [SMALL_STATE(335)] = 6258,
  [SMALL_STATE(336)] = 6269,
  [SMALL_STATE(337)] = 6278,
  [SMALL_STATE(338)] = 6287,
  [SMALL_STATE(339)] = 6296,
  [SMALL_STATE(340)] = 6305,
  [SMALL_STATE(341)] = 6314,
  [SMALL_STATE(342)] = 6325,
  [SMALL_STATE(343)] = 6338,
  [SMALL_STATE(344)] = 6346,
  [SMALL_STATE(345)] = 6354,
  [SMALL_STATE(346)] = 6362,
  [SMALL_STATE(347)] = 6370,
  [SMALL_STATE(348)] = 6378,
  [SMALL_STATE(349)] = 6386,
  [SMALL_STATE(350)] = 6394,
  [SMALL_STATE(351)] = 6402,
  [SMALL_STATE(352)] = 6410,
  [SMALL_STATE(353)] = 6418,
  [SMALL_STATE(354)] = 6426,
  [SMALL_STATE(355)] = 6434,
  [SMALL_STATE(356)] = 6442,
  [SMALL_STATE(357)] = 6450,
  [SMALL_STATE(358)] = 6458,
  [SMALL_STATE(359)] = 6466,
  [SMALL_STATE(360)] = 6474,
  [SMALL_STATE(361)] = 6482,
  [SMALL_STATE(362)] = 6490,
  [SMALL_STATE(363)] = 6498,
  [SMALL_STATE(364)] = 6506,
  [SMALL_STATE(365)] = 6514,
  [SMALL_STATE(366)] = 6522,
  [SMALL_STATE(367)] = 6530,
  [SMALL_STATE(368)] = 6538,
  [SMALL_STATE(369)] = 6548,
  [SMALL_STATE(370)] = 6556,
  [SMALL_STATE(371)] = 6564,
  [SMALL_STATE(372)] = 6572,
  [SMALL_STATE(373)] = 6580,
  [SMALL_STATE(374)] = 6588,
  [SMALL_STATE(375)] = 6596,
  [SMALL_STATE(376)] = 6604,
  [SMALL_STATE(377)] = 6612,
  [SMALL_STATE(378)] = 6622,
  [SMALL_STATE(379)] = 6630,
  [SMALL_STATE(380)] = 6638,
  [SMALL_STATE(381)] = 6646,
  [SMALL_STATE(382)] = 6656,
  [SMALL_STATE(383)] = 6666,
  [SMALL_STATE(384)] = 6674,
  [SMALL_STATE(385)] = 6682,
  [SMALL_STATE(386)] = 6690,
  [SMALL_STATE(387)] = 6698,
  [SMALL_STATE(388)] = 6706,
  [SMALL_STATE(389)] = 6714,
  [SMALL_STATE(390)] = 6722,
  [SMALL_STATE(391)] = 6730,
  [SMALL_STATE(392)] = 6738,
  [SMALL_STATE(393)] = 6746,
  [SMALL_STATE(394)] = 6754,
  [SMALL_STATE(395)] = 6762,
  [SMALL_STATE(396)] = 6770,
  [SMALL_STATE(397)] = 6778,
  [SMALL_STATE(398)] = 6786,
  [SMALL_STATE(399)] = 6794,
  [SMALL_STATE(400)] = 6802,
  [SMALL_STATE(401)] = 6810,
  [SMALL_STATE(402)] = 6818,
  [SMALL_STATE(403)] = 6826,
  [SMALL_STATE(404)] = 6834,
  [SMALL_STATE(405)] = 6842,
  [SMALL_STATE(406)] = 6852,
  [SMALL_STATE(407)] = 6860,
  [SMALL_STATE(408)] = 6868,
  [SMALL_STATE(409)] = 6876,
  [SMALL_STATE(410)] = 6884,
  [SMALL_STATE(411)] = 6892,
  [SMALL_STATE(412)] = 6900,
  [SMALL_STATE(413)] = 6908,
  [SMALL_STATE(414)] = 6916,
  [SMALL_STATE(415)] = 6924,
  [SMALL_STATE(416)] = 6932,
  [SMALL_STATE(417)] = 6940,
  [SMALL_STATE(418)] = 6948,
  [SMALL_STATE(419)] = 6956,
  [SMALL_STATE(420)] = 6964,
  [SMALL_STATE(421)] = 6972,
  [SMALL_STATE(422)] = 6980,
  [SMALL_STATE(423)] = 6988,
  [SMALL_STATE(424)] = 6996,
  [SMALL_STATE(425)] = 7004,
  [SMALL_STATE(426)] = 7012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(320),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(374),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(372),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 2, .production_id = 37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 2, .production_id = 37),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_string, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(263),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2), SHIFT_REPEAT(341),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2), SHIFT_REPEAT(342),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_instruction_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(352),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(48),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(184),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(351),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_label_instruction_repeat1, 2), SHIFT_REPEAT(124),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 5, .production_id = 66),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 5, .production_id = 66),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_instruction, 2, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param, 4, .production_id = 65),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param, 4, .production_id = 65),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_expansion, 2, .production_id = 43),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_expansion, 2, .production_id = 43),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 68),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mount_param_repeat1, 2, .production_id = 68),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_expansion, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate_expansion, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(276),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 2), SHIFT_REPEAT(130),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(73),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(66),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(64),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(358),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mount_param_param, 3, .production_id = 67),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mount_param_param, 3, .production_id = 67),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(261),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(106),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(142),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 52),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 52),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 53),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 1, .production_id = 53),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_fragment, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_fragment, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion_body, 3, .production_id = 61),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion_body, 3, .production_id = 61),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_name, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_name, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, .production_id = 34),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2, .production_id = 34),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(202),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_user_name_or_group_repeat1, 2), SHIFT_REPEAT(296),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, .production_id = 16),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, .production_id = 16),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(257),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(177),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(52),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(52),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(175),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(251),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(98),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(99),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(102),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 2), SHIFT_REPEAT(360),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(271),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 2), SHIFT_REPEAT(171),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param, 4, .production_id = 62),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, .production_id = 62),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, .production_id = 15),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, .production_id = 15),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_tag, 2, .production_id = 47),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_tag, 2, .production_id = 47),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 7),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 7),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 2, .production_id = 15),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 2, .production_id = 15),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 6),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1, .production_id = 16),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1, .production_id = 16),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2, .production_id = 19),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_with_heredoc, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_with_heredoc, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_fragment_repeat1, 1, .production_id = 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_name_or_group, 1, .production_id = 19),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1, .production_id = 15),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1, .production_id = 15),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(260),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(237),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(238),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 15),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 15),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(145),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(107),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(306),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2), SHIFT_REPEAT(346),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(425),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_digest, 2, .production_id = 49),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_digest, 2, .production_id = 49),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(267),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 2), SHIFT_REPEAT(236),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(209),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(300),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expose_instruction_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(250),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(125),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expose_instruction_repeat1, 2), SHIFT_REPEAT(196),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_instruction, 2, .production_id = 12),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(247),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 2), SHIFT_REPEAT(264),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 1, .production_id = 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 2, .production_id = 44),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(303),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 2), SHIFT_REPEAT(274),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1, .production_id = 11),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1, .production_id = 11),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(305),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(307),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 31),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_name_repeat1, 1, .production_id = 31),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expansion, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expansion, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 55),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 55),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_env_instruction_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(363),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_env_instruction_repeat1, 2), SHIFT_REPEAT(256),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_pair, 3, .production_id = 54),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_pair, 3, .production_id = 54),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_instruction, 2, .production_id = 14),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2, .production_id = 25),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 2),
  [773] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(245),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(281),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_value, 1, .production_id = 25),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1, .production_id = 44),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alias, 1),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 3, .production_id = 39),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 46),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_tag_repeat1, 1, .production_id = 46),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 38),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 1, .production_id = 38),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 35),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 1, .production_id = 35),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 3, .production_id = 40),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy_instruction, 4, .production_id = 40),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_instruction, 4, .production_id = 39),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(191),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(210),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(191),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 2, .production_id = 11),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 2, .production_id = 11),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 2, .production_id = 8),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose_port, 1),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose_port, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat2, 2),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_add_instruction_repeat1, 2), SHIFT_REPEAT(426),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 4, .production_id = 39),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1, .production_id = 41),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 4, .production_id = 40),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 4, .production_id = 8),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(101),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_run_instruction_repeat2, 2), SHIFT_REPEAT(309),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 36),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 1, .production_id = 36),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 1),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_instruction, 3, .production_id = 8),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_command, 2),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2),
  [917] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(284),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 2), SHIFT_REPEAT(223),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_instruction, 5, .production_id = 39),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_instruction, 5, .production_id = 40),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 32),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 32),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 48),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_image_digest_repeat1, 1, .production_id = 48),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate_user_name_or_group_fragment, 1),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 3, .production_id = 18),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2), SHIFT_REPEAT(386),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heredoc_block_repeat1, 2),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2), SHIFT_REPEAT(178),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_array_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 1),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_volume_instruction, 2, .production_id = 18),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_image_alias_repeat1, 1, .production_id = 63),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2), SHIFT_REPEAT(159),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_pair, 3, .production_id = 56),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_pair, 3, .production_id = 56),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1030] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2), SHIFT_REPEAT(105),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shell_command_repeat1, 2),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 51),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_json_string_repeat1, 1, .production_id = 51),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stopsignal_value_repeat1, 1, .production_id = 42),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_volume_instruction_repeat1, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 2, .production_id = 33),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 2, .production_id = 33),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_element, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 2),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_spec, 3, .production_id = 50),
  [1085] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_spec, 3, .production_id = 50),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 2, .production_id = 2),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 23),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 3, .production_id = 2),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 2, .production_id = 22),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 2, .production_id = 20),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_string_array, 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1, .production_id = 13),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc_block, 3),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stopsignal_instruction, 2, .production_id = 26),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_instruction, 2, .production_id = 17),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_onbuild_instruction, 2, .production_id = 24),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cross_build_instruction, 2, .production_id = 30),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_maintainer_instruction, 2, .production_id = 29),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_instruction, 2, .production_id = 9),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_instruction, 2, .production_id = 28),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workdir_instruction, 2, .production_id = 21),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 2, .production_id = 27),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_volume_instruction, 2, .production_id = 18),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_healthcheck_instruction, 3, .production_id = 27),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 4, .production_id = 45),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spaced_env_pair, 3, .production_id = 57),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_instruction, 4, .production_id = 58),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 59),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_instruction, 4, .production_id = 60),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_instruction, 5, .production_id = 64),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_dockerfile_external_scanner_create(void);
void tree_sitter_dockerfile_external_scanner_destroy(void *);
bool tree_sitter_dockerfile_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_dockerfile_external_scanner_serialize(void *, char *);
void tree_sitter_dockerfile_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dockerfile(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_dockerfile_external_scanner_create,
      tree_sitter_dockerfile_external_scanner_destroy,
      tree_sitter_dockerfile_external_scanner_scan,
      tree_sitter_dockerfile_external_scanner_serialize,
      tree_sitter_dockerfile_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
